#pragma once

#include <iostream>
#include "AccesoBD.h"



namespace AlquileresTuristicos {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// hereda de la clase "Form" de Windows Forms
	
	
	public ref class Viviendas : public System::Windows::Forms::Form
	{
	public:
		Viviendas(void)
		{
			InitializeComponent();
			// inicializacion los componentes
			
			
		}

	protected:
		// comprueba si la variable miembro components existe y, si es así, lo elimina
		~Viviendas()
		{
			if (components)
			{
				delete components;
			}
		}// define los controles y variables que se utilizarán en la interfaz gráfica 
	private: System::Windows::Forms::DataGridView^ dgvPropietarios;
	private: System::Windows::Forms::DataGridView^ dgvViviendas;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btnAnnadir;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtDireccion;
	private: System::Windows::Forms::TextBox^ txtPrecio;


	private: System::Windows::Forms::TextBox^ txtPersonas;
	private: System::Windows::Forms::TextBox^ txtMetros;


	private: System::Windows::Forms::TextBox^ txtHabitaciones;




	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		
		
		
		void InitializeComponent(void)
		{
			this->dgvPropietarios = (gcnew System::Windows::Forms::DataGridView());
			this->dgvViviendas = (gcnew System::Windows::Forms::DataGridView());
			this->btnAnnadir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->txtPersonas = (gcnew System::Windows::Forms::TextBox());
			this->txtMetros = (gcnew System::Windows::Forms::TextBox());
			this->txtHabitaciones = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPropietarios))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvViviendas))->BeginInit();
			this->SuspendLayout();//suspender temporalmente la actualización del diseño de los controles
			// 
			// dgvPropietarios
			// 
			this->dgvPropietarios->AllowUserToAddRows = false;
			this->dgvPropietarios->AllowUserToDeleteRows = false;
			this->dgvPropietarios->AllowUserToResizeRows = false;
			this->dgvPropietarios->BackgroundColor = System::Drawing::Color::White;
			this->dgvPropietarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPropietarios->Location = System::Drawing::Point(400, 15);
			this->dgvPropietarios->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgvPropietarios->MultiSelect = false;
			this->dgvPropietarios->Name = L"dgvPropietarios";
			this->dgvPropietarios->ReadOnly = true;
			this->dgvPropietarios->RowHeadersWidth = 51;
			this->dgvPropietarios->Size = System::Drawing::Size(411, 169);
			this->dgvPropietarios->TabIndex = 0;
			// 
			// dgvViviendas
			// 
			this->dgvViviendas->AllowUserToAddRows = false;
			this->dgvViviendas->AllowUserToDeleteRows = false;
			this->dgvViviendas->AllowUserToResizeRows = false;
			this->dgvViviendas->BackgroundColor = System::Drawing::Color::White;
			this->dgvViviendas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvViviendas->Location = System::Drawing::Point(19, 270);
			this->dgvViviendas->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgvViviendas->MultiSelect = false;
			this->dgvViviendas->Name = L"dgvViviendas";
			this->dgvViviendas->ReadOnly = true;
			this->dgvViviendas->RowHeadersWidth = 51;
			this->dgvViviendas->Size = System::Drawing::Size(791, 206);
			this->dgvViviendas->TabIndex = 1;
			// 
			// btnAnnadir
			// 
			this->btnAnnadir->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAnnadir->Location = System::Drawing::Point(664, 203);
			this->btnAnnadir->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnAnnadir->Name = L"btnAnnadir";
			this->btnAnnadir->Size = System::Drawing::Size(145, 47);
			this->btnAnnadir->TabIndex = 2;
			this->btnAnnadir->Text = L"Añadir";
			this->btnAnnadir->UseVisualStyleBackColor = true;
			this->btnAnnadir->Click += gcnew System::EventHandler(this, &Viviendas::btnAnnadir_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 66);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Dirección:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(29, 229);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Máx.Personas:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(29, 188);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Habitaciones:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 148);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 19);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Metros:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(28, 107);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 19);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Precio por día:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(281, 15);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 19);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Propietario:";
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(161, 68);
			this->txtDireccion->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(209, 22);
			this->txtDireccion->TabIndex = 9;
			// 
			// txtPrecio
			// 
			this->txtPrecio->Location = System::Drawing::Point(161, 107);
			this->txtPrecio->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(112, 22);
			this->txtPrecio->TabIndex = 10;
			// 
			// txtPersonas
			// 
			this->txtPersonas->Location = System::Drawing::Point(163, 225);
			this->txtPersonas->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtPersonas->Name = L"txtPersonas";
			this->txtPersonas->Size = System::Drawing::Size(112, 22);
			this->txtPersonas->TabIndex = 11;
			// 
			// txtMetros
			// 
			this->txtMetros->Location = System::Drawing::Point(161, 146);
			this->txtMetros->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtMetros->Name = L"txtMetros";
			this->txtMetros->Size = System::Drawing::Size(112, 22);
			this->txtMetros->TabIndex = 13;
			// 
			// txtHabitaciones
			// 
			this->txtHabitaciones->Location = System::Drawing::Point(163, 186);
			this->txtHabitaciones->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtHabitaciones->Name = L"txtHabitaciones";
			this->txtHabitaciones->Size = System::Drawing::Size(112, 22);
			this->txtHabitaciones->TabIndex = 12;
			// 
			// Viviendas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(827, 492);
			this->Controls->Add(this->txtMetros);
			this->Controls->Add(this->txtHabitaciones);
			this->Controls->Add(this->txtPersonas);
			this->Controls->Add(this->txtPrecio);
			this->Controls->Add(this->txtDireccion);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnAnnadir);
			this->Controls->Add(this->dgvViviendas);
			this->Controls->Add(this->dgvPropietarios);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Viviendas";
			this->Text = L"Viviendas";
			this->Load += gcnew System::EventHandler(this, &Viviendas::Viviendas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPropietarios))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvViviendas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void Viviendas_Load(System::Object^ sender, System::EventArgs^ e) {
		AccesoBD^ accesoBD = AccesoBD::getInstance();//se obtiene la instancia de la clase

		DataTable^ table1 = accesoBD->consulta("SELECT id_propietario, nombre, apellidos, nif FROM Propietarios");
		dgvPropietarios->DataSource = table1;//cargar los datos de los propietarios

		DataTable^ table2 = accesoBD->consulta("SELECT nif, V.direccion, precio_dia, metros, num_habitaciones, max_personas " +
			"FROM Viviendas V, Propietarios P " +//cargar los datos de la vivienda y aquien pertenece
			"WHERE V.id_propietario = P.id_propietario");
		dgvViviendas->DataSource = table2;
	}


	private: System::Void btnAnnadir_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvPropietarios->SelectedRows->Count == 1) {//se configura paraque no se pueda selecionar mas de un propietario
			int id_propietario = Convert::ToInt32(dgvPropietarios->SelectedRows[0]->Cells[0]->Value);//coge el valor que hay en la celda del id de propietarios
			//condicion para no incorporar campos vacios
			if (txtDireccion->Text->Trim()->Equals("") || txtPrecio->Text->Trim()->Equals("") ||
				txtMetros->Text->Trim()->Equals("") || txtHabitaciones->Text->Trim()->Equals("") ||
				txtPersonas->Text->Trim()->Equals(""))
				MessageBox::Show(L"Debe rellenar todos los campos para poder añadir la vivienda", L"Datos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else
			{//los valores introducidos son numericos devuelve true sino enseña un mensaje 
				int precio, metros, habitaciones, personas;
				if (!int::TryParse(txtPrecio->Text, precio) || !int::TryParse(txtMetros->Text, metros) ||
					!int::TryParse(txtHabitaciones->Text, habitaciones) || !int::TryParse(txtPersonas->Text, personas))
					MessageBox::Show(L"Debe introducir un número en los campos numéricos", L"El dato no es un número", MessageBoxButtons::OK, MessageBoxIcon::Error);
				//para introducir los datos en la BD
				else {
					String^ sql = "INSERT INTO Viviendas(direccion, precio_dia, metros, num_habitaciones, max_personas, id_propietario) VALUES('" +
						txtDireccion->Text + "'," +
						txtPrecio->Text + "," +
						txtMetros->Text + "," +
						txtHabitaciones->Text + "," +
						txtPersonas->Text + "," +
						id_propietario + ")";

					AccesoBD^ accesoBD = AccesoBD::getInstance();//obtiene una instancia única de la clase AccesoBD
					accesoBD->insertar(sql);//insertar datos de la nueva vivienda

					txtDireccion->Text = "";
					txtPrecio->Text = "";
					txtMetros->Text = "";
					txtHabitaciones->Text = "";
					txtPersonas->Text = "";
					//nos muestra una tabla con los datos desde viviendas y el nif propietarios
					DataTable^ table2 = accesoBD->consulta("SELECT nif, V.direccion, precio_dia, metros, num_habitaciones, max_personas " +
						"FROM Viviendas V, Propietarios P " +
						"WHERE V.id_propietario = P.id_propietario");
					dgvViviendas->DataSource = table2;
				}
			}
		}
		else {//muestra un mensaje sino se ha seleccionado un propietario
			MessageBox::Show(L"Debe elegir el propietario para poder añadir esta vivienda", L"Datos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	};
}
