#pragma once

#include "AccesoBD.h"


namespace AlquileresTuristicos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Data::SQLite;

	// hereda de la clase "Form" de Windows Forms
	public ref class Inquilinos : public System::Windows::Forms::Form
	{
	public:
		Inquilinos(void)
		{
			InitializeComponent();//es un método generado por el diseñador de formularios de Windows Forms y que inicializa los componentes del formulario
			
		}
		//verifica si el campo "components" es distinto de "nullptr". Si es así,elimina el objeto 
	protected:
		
		~Inquilinos()
		{
			if (components)
			{
				delete components;
			}
		}//para definir la interfaz de usuario del formulario "Inquilinos"
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ Label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;//mostrar datos de inquilinos
	private: System::Windows::Forms::Button^ buttonAñadir;
	private: System::Windows::Forms::Label^ label5;



	protected:


	private:
		
		System::ComponentModel::Container^ components;//para gestionar su ciclo de vida y liberar la memoria

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)// inicializar y configurar todos los componentes del formulario
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonAñadir = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();//suspender temporalmente su diseño y optimizar el rendimiento
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Location = System::Drawing::Point(116, 74);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(248, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(520, 74);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(291, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(116, 121);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(248, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(116, 169);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(695, 22);
			this->textBox4->TabIndex = 8;
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Location = System::Drawing::Point(24, 74);
			this->Label1->Name = L"Label1";
			this->Label1->Size = System::Drawing::Size(56, 16);
			this->Label1->TabIndex = 9;
			this->Label1->Text = L"Nombre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(433, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"NIF";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Direccion";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(15, 272);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(797, 207);
			this->dataGridView1->TabIndex = 13;
			// 
			// buttonAñadir
			// 
			this->buttonAñadir->BackColor = System::Drawing::SystemColors::ControlLight;
			this->buttonAñadir->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAñadir->Location = System::Drawing::Point(687, 209);
			this->buttonAñadir->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonAñadir->Name = L"buttonAñadir";
			this->buttonAñadir->Size = System::Drawing::Size(125, 44);
			this->buttonAñadir->TabIndex = 14;
			this->buttonAñadir->Text = L"Añadir";
			this->buttonAñadir->UseVisualStyleBackColor = false;
			this->buttonAñadir->Click += gcnew System::EventHandler(this, &Inquilinos::buttonAñadir_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(284, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(247, 33);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Gestion de Inquilinos";
			// 
			// Inquilinos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(827, 492);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->buttonAñadir);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Inquilinos";
			this->Text = L"Inquilinos";
			this->Load += gcnew System::EventHandler(this, &Inquilinos::Inquilinos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Inquilinos_Load(System::Object^ sender, System::EventArgs^ e) {
		AccesoBD^ accesoBD = AccesoBD::getInstance();/*crea una variable llamada accesoBD que es un puntero
		                                               a un objeto AccesoBD administrado-La llamada al método estático getInstance()
		                                                devuelve una única instancia de la clase AccesoBD utilizando el patrón de diseño Singleton*/
		DataTable^ table = accesoBD->consulta("SELECT nombre, apellidos, nif, direccion FROM Inquilinos");

		dataGridView1->DataSource = table;
		dataGridView1->Columns[1]->MinimumWidth = 150;
		dataGridView1->Columns[3]->MinimumWidth = 200;
	}
		   /*Declaramos la condicion si algunos de los campos esta vacio o contiene espacios en blanco que muestre un mensaje al usuario
		   de esta forma se evita espacios vacios en memoria y en la BD*/
	private: System::Void buttonAñadir_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Trim()->Equals("") || textBox2->Text->Trim()->Equals("") ||
			textBox3->Text->Trim()->Equals("") || textBox4->Text->Trim()->Equals(""))
			MessageBox::Show(L"Debe rellenar todos los campos para poder añadir el inquilino", L"Datos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Error);


		else
		{// SQL instrucción de inserción de datos en la tabla 
			String^ sql = "INSERT INTO Inquilinos(nombre, apellidos, nif, direccion) VALUES('" +
				textBox1->Text + "','" +
				textBox2->Text + "','" +
				textBox3->Text + "','" +
				textBox4->Text + "')";
			AccesoBD^ accesoBD = AccesoBD::getInstance();//insertar los datos en la base de datos
			accesoBD->insertar(sql);
			// limpia los campos de entrada después de agregar un nuevo elemento,actualiza y los muestra
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			DataTable^ table = accesoBD->consulta("SELECT nombre, apellidos, nif, direccion FROM Inquilinos");
			dataGridView1->DataSource = table;
		}

	}
	};
}
