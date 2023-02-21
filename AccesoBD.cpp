#include "pch.h"

#include "AccesoBD.h"


namespace AlquileresTuristicos {

	AccesoBD::AccesoBD() {
		connection = gcnew SQLiteConnection(L"Data Source=BD_alquileres_turisticos.db;Version=3;");//intenta conectar con la BBDD y sino existe crea el fichero
		connection->Open();

		crearBD();
	}
	//destructor cierra la conexión a la base de datos SQLite y libera la memoria asignada para la conexión.
	AccesoBD::~AccesoBD() {
		connection->Close();
		delete connection;
	}

	AccesoBD^ AccesoBD::getInstance() {
		if (accesoBD == nullptr)//si no esta creada la instancia la crea 
			accesoBD = gcnew AccesoBD();

		return accesoBD;
	}
	//con esta función se ejecuta una consulta SQL en la base de datos SQLite utilizando un adaptador y devuelve los resultados como una tabla de datos.

	DataTable^ AccesoBD::consulta(String^ consultaSQL) {
		DataTable^ table = gcnew DataTable();
		SQLiteDataAdapter^ adapter = gcnew SQLiteDataAdapter(consultaSQL, connection);
		adapter->Fill(table); //se utiliza para ejecutar una consulta SQL y llenar una instancia de "DataTable" o "DataSet" con los resultados.

		return table;
	}

	//ejecuta una sentencia SQL de inserción en la base de datos SQLite utilizando un comando y no devuelve ningún resultado.
	void AccesoBD::insertar(String^ insercionSQL) {
		SQLiteCommand^ cmd = gcnew SQLiteCommand(insercionSQL, connection);
		cmd->ExecuteNonQuery();
	}


	void AccesoBD::crearBD() {//antes de crear cada tabla comprueba si no existe
		String^ sentencia = "CREATE TABLE IF NOT EXISTS Propietarios (" \
			"id_propietario INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT," \
			"nombre TEXT(15) NOT NULL," \
			"apellidos TEXT(50) NOT NULL," \
			"nif text(9) NOT NULL," \
			"direccion TEXT(50) NOT NULL," \
			"valoracion INTEGER);";
		crearTabla(sentencia);

		sentencia = "CREATE TABLE IF NOT EXISTS Inquilinos (" \
			"id_inquilino INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT," \
			"nombre TEXT(15) NOT NULL," \
			"apellidos TEXT(50) NOT NULL," \
			"nif text(9) NOT NULL," \
			"direccion TEXT(50) NOT NULL," \
			"ingresos INTEGER," \
			"pago_preferido TEXT(20)," \
			"valoracion INTEGER);";
		crearTabla(sentencia);

		sentencia = "CREATE TABLE IF NOT EXISTS Viviendas (" \
			"id_vivienda INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT," \
			"direccion TEXT(50) NOT NULL," \
			"precio_dia INTEGER NOT NULL," \
			"metros INTEGER NOT NULL," \
			"num_habitaciones INTEGER NOT NULL," \
			"max_personas INTEGER NOT NULL," \
			"valoracion INTEGER," \
			"id_propietario INTEGER NOT NULL," \
			"CONSTRAINT Viviendas_FK FOREIGN KEY (id_propietario) REFERENCES Propietarios(id_propietario));";
		crearTabla(sentencia);

		sentencia = "CREATE TABLE IF NOT EXISTS Reservas (" \
			"id_reserva INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT," \
			"id_inquilino INTEGER NOT NULL," \
			"id_vivienda INTEGER NOT NULL," \
			"fecha_inicio TEXT(10)," \
			"fecha_fin TEXT(10)," \
			"precio_total INTEGER," \
			"CONSTRAINT Inquilinos_FK FOREIGN KEY (id_inquilino) REFERENCES Inquilinos(id_inquilino)," \
			"CONSTRAINT Viviendas_FK FOREIGN KEY (id_vivienda) REFERENCES Viviendas(id_vivienda));";
		crearTabla(sentencia);

		sentencia = "CREATE TABLE IF NOT EXISTS Comentarios (" \
			"id_comentario INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT," \
			"id_inquilino INTEGER NOT NULL," \
			"id_vivienda INTEGER NOT NULL," \
			"comentario TEXT(100) NOT NULL," \
			"valoracion INTEGER NOT NULL," \
			"CONSTRAINT Inquilinos_FK FOREIGN KEY (id_inquilino) REFERENCES Inquilinos(id_inquilino)," \
			"CONSTRAINT Viviendas_FK FOREIGN KEY (id_vivienda) REFERENCES Viviendas(id_vivienda));";
		crearTabla(sentencia);
	}

	// ejecuta una sentencia SQL para crear una tabla en la base de datos SQLite utilizando un comando
	void AccesoBD::crearTabla(String^ sentencia) {
		SQLiteCommand^ cmd = gcnew SQLiteCommand(sentencia, connection);
		cmd->ExecuteNonQuery();
	}

}
