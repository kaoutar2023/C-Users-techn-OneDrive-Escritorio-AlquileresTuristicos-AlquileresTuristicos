#pragma once

#include "AccesoBD.h"


namespace AlquileresTuristicos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	// hereda de la clase "Form" de Windows Forms.
	public ref class Propietarios : public System::Windows::Forms::Form
	{
	public:
		Propietarios(void)
		{
			InitializeComponent();//es un método generado por el diseñador de formularios de Windows Forms y que inicializa los componentes del formulario
			
			
		}

		//verifica si el campo "components" es distinto de "nullptr". Si es así,elimina el objeto 
	protected:
		
		~Propietarios()
		{
			if (components)
			{
				delete components;
			}
		}//para definir la interfaz de usuario del formulario "Propietarios".
	private: System::Windows::Forms::Label^ Label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ buttonAñadir;


	protected:

	protected:

	protected:

	private:
		
		System::ComponentModel::Container^ components;//para gestionar su ciclo de vida y liberar la memoria.

#pragma region Windows Form Designer generated code
		//para definir la interfaz de usuario del formulario
		
		void InitializeComponent(void)// inicializar y configurar todos los componentes del formulario
		{
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonAñadir = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Location = System::Drawing::Point(9, 71);
			this->Label1->Name = L"Label1";
			this->Label1->Size = System::Drawing::Size(56, 16);
			this->Label1->TabIndex = 0;
			this->Label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(424, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Direccion";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"NIF";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(423, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Apellido";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(89, 71);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(227, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(504, 124);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(227, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(89, 119);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(227, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(504, 63);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(227, 22);
			this->textBox4->TabIndex = 7;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 240);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(800, 239);
			this->dataGridView1->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(83, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(273, 33);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Gestion de propietarios";
			// 
			// buttonAñadir
			// 
			this->buttonAñadir->BackColor = System::Drawing::SystemColors::ControlLight;
			this->buttonAñadir->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAñadir->Location = System::Drawing::Point(703, 172);
			this->buttonAñadir->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonAñadir->Name = L"buttonAñadir";
			this->buttonAñadir->Size = System::Drawing::Size(109, 44);
			this->buttonAñadir->TabIndex = 15;
			this->buttonAñadir->Text = L"Añadir";
			this->buttonAñadir->UseVisualStyleBackColor = false;
			this->buttonAñadir->Click += gcnew System::EventHandler(this, &Propietarios::buttonAñadir_Click);
			// 
			// Propietarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(827, 492);
			this->Controls->Add(this->buttonAñadir);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Propietarios";
			this->Text = L"Propietarios";
			this->Load += gcnew System::EventHandler(this, &Propietarios::Propietarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Propietarios_Load(System::Object^ sender, System::EventArgs^ e) {
		AccesoBD^ accesoBD = AccesoBD::getInstance();
		DataTable^ table = accesoBD->consulta("SELECT nombre, apellidos, nif, direccion FROM Propietarios");

		dataGridView1->DataSource = table;
		dataGridView1->Columns[1]->MinimumWidth = 150;
		dataGridView1->Columns[3]->MinimumWidth = 200;

	} //Declaramos la condicion si algunos de los campos esta vacio o contiene espacios en blanco que muestre un mensaje al usuario

	private: System::Void buttonAñadir_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Trim()->Equals("") || textBox2->Text->Trim()->Equals("") ||
			textBox3->Text->Trim()->Equals("") || textBox4->Text->Trim()->Equals(""))
			MessageBox::Show(L"Debe rellenar todos los campos para poder añadir el propietario", L"Datos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
		{
			// SQL instrucción de inserción de datos en la tabla 
			String^ sql = "INSERT INTO Propietarios(nombre, apellidos, nif, direccion) VALUES('" +
				textBox1->Text + "','" +
				textBox4->Text + "','" +
				textBox3->Text + "','" +
				textBox2->Text + "')";
			AccesoBD^ accesoBD = AccesoBD::getInstance();
			accesoBD->insertar(sql);//Insertar en la BD
			// limpia los campos de entrada después de agregar un nuevo elemento,actualiza y los muestra
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			DataTable^ table = accesoBD->consulta("SELECT nombre, apellidos, nif, direccion FROM Propietarios");
			dataGridView1->DataSource = table;
		}
	}
	};
}