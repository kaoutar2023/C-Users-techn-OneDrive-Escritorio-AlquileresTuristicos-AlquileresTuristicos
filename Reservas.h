#pragma once

#include "AccesoBD.h"


namespace AlquileresTuristicos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// hereda de la clase "Form" de Windows Forms
	public ref class Reservas : public System::Windows::Forms::Form
	{
	public:// inicializacion los componentes
		Reservas(void)
		{
			InitializeComponent();
			
			
		}
		//verifica si el campo "components" es distinto de "nullptr". Si es así,elimina el objeto 
	protected:
		
		~Reservas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvReservas;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dtpFechaInicio;
	private: System::Windows::Forms::DateTimePicker^ dtpFechaFinal;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPrecioTotal;
	private: System::Windows::Forms::DataGridView^ dgvInquilinos;
	private: System::Windows::Forms::DataGridView^ dgvViviendas;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnReservar;
	private: System::Windows::Forms::Button^ btnCalcularPrecio;

	private:
		//para gestionar su ciclo de vida y liberar la memoria
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)// inicializar y configurar todos los componentes del formulario
		{
			this->dgvReservas = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dtpFechaInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpFechaFinal = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPrecioTotal = (gcnew System::Windows::Forms::TextBox());
			this->dgvInquilinos = (gcnew System::Windows::Forms::DataGridView());
			this->dgvViviendas = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnReservar = (gcnew System::Windows::Forms::Button());
			this->btnCalcularPrecio = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReservas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInquilinos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvViviendas))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvReservas
			// 
			this->dgvReservas->AllowUserToAddRows = false;
			this->dgvReservas->AllowUserToDeleteRows = false;
			this->dgvReservas->AllowUserToResizeRows = false;
			this->dgvReservas->BackgroundColor = System::Drawing::Color::White;
			this->dgvReservas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvReservas->Location = System::Drawing::Point(16, 299);
			this->dgvReservas->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgvReservas->MultiSelect = false;
			this->dgvReservas->Name = L"dgvReservas";
			this->dgvReservas->ReadOnly = true;
			this->dgvReservas->RowHeadersWidth = 51;
			this->dgvReservas->Size = System::Drawing::Size(795, 178);
			this->dgvReservas->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 220);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Fecha inicio:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(291, 220);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Fecha final:";
			// 
			// dtpFechaInicio
			// 
			this->dtpFechaInicio->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpFechaInicio->Location = System::Drawing::Point(152, 222);
			this->dtpFechaInicio->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dtpFechaInicio->Name = L"dtpFechaInicio";
			this->dtpFechaInicio->Size = System::Drawing::Size(115, 22);
			this->dtpFechaInicio->TabIndex = 3;
			// 
			// dtpFechaFinal
			// 
			this->dtpFechaFinal->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpFechaFinal->Location = System::Drawing::Point(417, 220);
			this->dtpFechaFinal->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dtpFechaFinal->Name = L"dtpFechaFinal";
			this->dtpFechaFinal->Size = System::Drawing::Size(115, 22);
			this->dtpFechaFinal->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 267);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 22);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Precio total:";
			// 
			// txtPrecioTotal
			// 
			this->txtPrecioTotal->Location = System::Drawing::Point(152, 267);
			this->txtPrecioTotal->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtPrecioTotal->Name = L"txtPrecioTotal";
			this->txtPrecioTotal->ReadOnly = true;
			this->txtPrecioTotal->Size = System::Drawing::Size(115, 22);
			this->txtPrecioTotal->TabIndex = 6;
			// 
			// dgvInquilinos
			// 
			this->dgvInquilinos->AllowUserToAddRows = false;
			this->dgvInquilinos->AllowUserToDeleteRows = false;
			this->dgvInquilinos->BackgroundColor = System::Drawing::Color::White;
			this->dgvInquilinos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvInquilinos->Location = System::Drawing::Point(16, 34);
			this->dgvInquilinos->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgvInquilinos->MultiSelect = false;
			this->dgvInquilinos->Name = L"dgvInquilinos";
			this->dgvInquilinos->ReadOnly = true;
			this->dgvInquilinos->RowHeadersWidth = 51;
			this->dgvInquilinos->Size = System::Drawing::Size(393, 171);
			this->dgvInquilinos->TabIndex = 7;
			// 
			// dgvViviendas
			// 
			this->dgvViviendas->AllowUserToAddRows = false;
			this->dgvViviendas->AllowUserToDeleteRows = false;
			this->dgvViviendas->AllowUserToResizeRows = false;
			this->dgvViviendas->BackgroundColor = System::Drawing::Color::White;
			this->dgvViviendas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvViviendas->Location = System::Drawing::Point(417, 34);
			this->dgvViviendas->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgvViviendas->MultiSelect = false;
			this->dgvViviendas->Name = L"dgvViviendas";
			this->dgvViviendas->ReadOnly = true;
			this->dgvViviendas->RowHeadersWidth = 51;
			this->dgvViviendas->Size = System::Drawing::Size(393, 171);
			this->dgvViviendas->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(161, 9);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 22);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Inquilinos";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(563, 9);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 22);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Viviendas";
			// 
			// btnReservar
			// 
			this->btnReservar->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReservar->Location = System::Drawing::Point(656, 233);
			this->btnReservar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnReservar->Name = L"btnReservar";
			this->btnReservar->Size = System::Drawing::Size(155, 49);
			this->btnReservar->TabIndex = 11;
			this->btnReservar->Text = L"Reservar";
			this->btnReservar->UseVisualStyleBackColor = true;
			this->btnReservar->Click += gcnew System::EventHandler(this, &Reservas::btnReservar_Click);
			// 
			// btnCalcularPrecio
			// 
			this->btnCalcularPrecio->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalcularPrecio->Location = System::Drawing::Point(295, 261);
			this->btnCalcularPrecio->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCalcularPrecio->Name = L"btnCalcularPrecio";
			this->btnCalcularPrecio->Size = System::Drawing::Size(188, 31);
			this->btnCalcularPrecio->TabIndex = 12;
			this->btnCalcularPrecio->Text = L"Calcular precio";
			this->btnCalcularPrecio->UseVisualStyleBackColor = true;
			this->btnCalcularPrecio->Click += gcnew System::EventHandler(this, &Reservas::btnCalcularPrecio_Click);
			// 
			// Reservas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(827, 492);
			this->Controls->Add(this->btnCalcularPrecio);
			this->Controls->Add(this->btnReservar);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvViviendas);
			this->Controls->Add(this->dgvInquilinos);
			this->Controls->Add(this->txtPrecioTotal);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dtpFechaFinal);
			this->Controls->Add(this->dtpFechaInicio);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvReservas);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Reservas";
			this->Text = L"Reservas";
			this->Load += gcnew System::EventHandler(this, &Reservas::Reservas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReservas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInquilinos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvViviendas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Reservas_Load(System::Object^ sender, System::EventArgs^ e) {
		AccesoBD^ accesoBD = AccesoBD::getInstance();//devuelve una única instancia de la clase AccesoBD
		//consultar los datos del inquilino
		DataTable^ table1 = accesoBD->consulta("SELECT id_inquilino, nif, nombre, apellidos FROM Inquilinos");
		dgvInquilinos->DataSource = table1;
		//consultar los datos de la vivienda
		DataTable^ table2 = accesoBD->consulta("SELECT id_vivienda, direccion, precio_dia, metros, num_habitaciones, max_personas FROM Viviendas V");
		dgvViviendas->DataSource = table2;
		//para obtener la información de las reservas 
		DataTable^ table3 = accesoBD->consulta("SELECT V.direccion, I.nif, fecha_inicio, fecha_fin, precio_total " +
			"FROM Viviendas V, Inquilinos I, Reservas R " +
			" WHERE R.id_inquilino = I.id_inquilino " +
			" AND R.id_vivienda = V.id_vivienda ");
		dgvReservas->DataSource = table3;//muestra los resultados en e dataGridView

	}
		   /*verifica si se ha seleccionado una fila de cada tabla si se cumple la
		   condicion se extrae el valor de cada tabla y se almacen en las variables*/

	private: System::Void btnReservar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvInquilinos->SelectedRows->Count == 1 && dgvViviendas->SelectedRows->Count == 1) {
			int id_inquilino = Convert::ToInt32(dgvInquilinos->SelectedRows[0]->Cells[0]->Value);
			int id_vivienda = Convert::ToInt32(dgvViviendas->SelectedRows[0]->Cells[0]->Value);
			//devuelve un valor mayor o igual a cero, significa que la fecha de inicio es mayor o igual que la fecha final y muestra mnsj
			if (dtpFechaInicio->Value.CompareTo(dtpFechaFinal->Value) >= 0) {
				MessageBox::Show(L"La fecha final debe ser mayor que la fecha de inicio", L"Fechas incorrectas", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {//multiplca precio_dia por el num de dias totales (restando la fecha_inicio de la final)
				int precio_dia = Convert::ToInt32(dgvViviendas->SelectedRows[0]->Cells[2]->Value);
				txtPrecioTotal->Text = (precio_dia * (dtpFechaFinal->Value.Subtract(dtpFechaInicio->Value).Days + 1)).ToString();
				//consulta SQL de inserción en la tabla "Reservas" con todos los datos de la reserva
				String^ sql = "INSERT INTO Reservas(fecha_inicio, fecha_fin, precio_total, id_inquilino, id_vivienda) VALUES('" +
					dtpFechaInicio->Value.ToString()->Substring(0, 10) + "','" +
					dtpFechaFinal->Value.ToString()->Substring(0, 10) + "'," +
					txtPrecioTotal->Text + "," +
					id_inquilino + "," +
					id_vivienda + ")";

				AccesoBD^ accesoBD = AccesoBD::getInstance();//se obtiene la instancia de la clase
				accesoBD->insertar(sql);

				txtPrecioTotal->Text = "";
				//consulta SQL para unir las tablas vivienda/inquilinos/reservas
				DataTable^ table = accesoBD->consulta("SELECT V.direccion, I.nif, fecha_inicio, fecha_fin, precio_total " +
					"FROM Viviendas V, Inquilinos I, Reservas R " +
					" WHERE R.id_inquilino = I.id_inquilino " +
					" AND R.id_vivienda = V.id_vivienda ");
				dgvReservas->DataSource = table;
			}
		}
		else {// indica que se deben de seleccionar ambos elementos
			MessageBox::Show(L"Debe seleccionar un inquilino y una vivienda para hacer la reserva", L"Inquilino o vivienda no seleccionados", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   //para calcular el precio total la fecha_fin debe ser superior a la fecha_inicio,seleccionar una vivienda
	private: System::Void btnCalcularPrecio_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dtpFechaInicio->Value.CompareTo(dtpFechaFinal->Value) >= 0) {
			MessageBox::Show(L"La fecha final debe ser mayor que la fecha de inicio", L"Fechas incorrectas", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {//se recupera el precio que esta guardado en la colum2,se convierte a un entero , y se almacena en la variable 
			if (dgvViviendas->SelectedRows->Count == 1) {
				int precio_dia = Convert::ToInt32(dgvViviendas->SelectedRows[0]->Cells[2]->Value);
				txtPrecioTotal->Text = (precio_dia * (dtpFechaFinal->Value.Date.Subtract(dtpFechaInicio->Value.Date).Days)).ToString();
			}
			else {//sino se ha selecionado una vivienda se muestra un mnsj
				MessageBox::Show(L"Debe seleccionar una vivienda para calcular el precio total", L"Vivienda no seleccionada", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}

	};
}
