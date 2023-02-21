#pragma once

namespace AlquileresTuristicos {

	using namespace std;
	using namespace System;
	using namespace System::Data;
	using namespace System::Data::SQLite;//contiene clases específicas para poder trabajar con la base de datos SQLite, como SQLiteConnection, SQLiteCommand y SQLiteDataAdapter.

	ref class AccesoBD {

		// Singleton pattern
	private:
		static AccesoBD^ accesoBD = nullptr;//puntero a una instancia única de la clase,este garantiza que no exista mas de una instancia
		static SQLiteConnection^ connection = nullptr;//puntero para la conexion a la base de datos

		AccesoBD();//constructor (crear nueva instancia y establecer conexion)
		~AccesoBD();//Destructor(cerrar la conexion y liberar memoria utilizada)

	public:
		static AccesoBD^ getInstance();/* llama a la función sin tener que
		                               crear una instancia de la clase "AccesoBD*/


		// Gestión de la BD
	private:
		static const char^ BD_Alquileres;//puntero a la cadena  de caracteres constante para el nombreBD

		static void crearBD();//crea la base de datos SQLite si aún no existe
		static void crearTabla(String^ sentencia);//crea una tabla en la base de datos con la sentencia SQL indicada.

	public:
		DataTable^ consulta(String^ cadenaConsulta);//nos devuelve los resultadpoos en un dataTable
		void insertar(String^ insercionSQL);//insertar datos en la BD

	};
}
