#pragma once

#include <iostream>
#include "Propietarios.h"
#include "Inquilinos.h"
#include "Viviendas.h"
#include "Reservas.h"

//princpal hereda todas las propiedades y metodos de la clase from
namespace AlquileresTuristicos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//se puede acceder desde la misma clase o desde una clase derivada
	public ref class Principal : public System::Windows::Forms::Form
	{
	public:
		Principal(void)
		{
			InitializeComponent();
			
		}

	protected:
		//se llama automaticamente cuando se destruye un objeto de la clase
		~Principal()
		{
			if (components)
			{
				delete components;
			}
		}//objetos de la clase
	private: System::Windows::Forms::Panel^ pnlBotones;
	protected:
	private: System::Windows::Forms::Panel^ pnlFormularios;
	private: System::Windows::Forms::Button^ btnResenas;
	private: System::Windows::Forms::Button^ btnReservas;
	private: System::Windows::Forms::Button^ btnViviendas;
	private: System::Windows::Forms::Button^ btnInquilinos;
	private: System::Windows::Forms::Button^ btnPropietarios;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;










	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{//crea un nuevo objeto de la clase button y lo asigna a la variable de la clase principal
			this->pnlBotones = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnResenas = (gcnew System::Windows::Forms::Button());
			this->btnReservas = (gcnew System::Windows::Forms::Button());
			this->btnViviendas = (gcnew System::Windows::Forms::Button());
			this->btnInquilinos = (gcnew System::Windows::Forms::Button());
			this->btnPropietarios = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnlFormularios = (gcnew System::Windows::Forms::Panel());
			this->pnlBotones->SuspendLayout();
			this->SuspendLayout();
			
			
			this->pnlBotones->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pnlBotones->Controls->Add(this->panel2);
			this->pnlBotones->Controls->Add(this->btnResenas);
			this->pnlBotones->Controls->Add(this->btnReservas);
			this->pnlBotones->Controls->Add(this->btnViviendas);
			this->pnlBotones->Controls->Add(this->btnInquilinos);
			this->pnlBotones->Controls->Add(this->btnPropietarios);
			this->pnlBotones->Controls->Add(this->panel1);
			this->pnlBotones->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlBotones->Location = System::Drawing::Point(0, 0);
			this->pnlBotones->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pnlBotones->Name = L"pnlBotones";
			this->pnlBotones->Size = System::Drawing::Size(219, 484);
			this->pnlBotones->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 402);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(219, 92);
			this->panel2->TabIndex = 6;
			// 
			// btnResenas
			// 
			this->btnResenas->BackColor = System::Drawing::Color::Teal;
			this->btnResenas->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnResenas->Enabled = false;
			this->btnResenas->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResenas->Location = System::Drawing::Point(0, 340);
			this->btnResenas->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnResenas->Name = L"btnResenas";
			this->btnResenas->Size = System::Drawing::Size(219, 62);
			this->btnResenas->TabIndex = 5;
			this->btnResenas->TabStop = false;
			this->btnResenas->Text = L"Rese�as";
			this->btnResenas->UseVisualStyleBackColor = false;
			this->btnResenas->Visible = false;
			// 
			// btnReservas
			// 
			this->btnReservas->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnReservas->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnReservas->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReservas->Location = System::Drawing::Point(0, 278);
			this->btnReservas->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnReservas->Name = L"btnReservas";
			this->btnReservas->Size = System::Drawing::Size(219, 62);
			this->btnReservas->TabIndex = 4;
			this->btnReservas->Text = L"Reservas";
			this->btnReservas->UseVisualStyleBackColor = false;
			this->btnReservas->Click += gcnew System::EventHandler(this, &Principal::btnReservas_Click);
			// 
			// btnViviendas
			// 
			this->btnViviendas->BackColor = System::Drawing::Color::Teal;
			this->btnViviendas->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnViviendas->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViviendas->Location = System::Drawing::Point(0, 216);
			this->btnViviendas->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnViviendas->Name = L"btnViviendas";
			this->btnViviendas->Size = System::Drawing::Size(219, 62);
			this->btnViviendas->TabIndex = 3;
			this->btnViviendas->Text = L"Viviendas";
			this->btnViviendas->UseVisualStyleBackColor = false;
			this->btnViviendas->Click += gcnew System::EventHandler(this, &Principal::btnViviendas_Click);
			// 
			// btnInquilinos
			// 
			this->btnInquilinos->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnInquilinos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnInquilinos->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInquilinos->Location = System::Drawing::Point(0, 154);
			this->btnInquilinos->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnInquilinos->Name = L"btnInquilinos";
			this->btnInquilinos->Size = System::Drawing::Size(219, 62);
			this->btnInquilinos->TabIndex = 2;
			this->btnInquilinos->Text = L"Inquilinos";
			this->btnInquilinos->UseVisualStyleBackColor = false;
			this->btnInquilinos->Click += gcnew System::EventHandler(this, &Principal::btnInquilinos_Click);
			// 
			// btnPropietarios
			// 
			this->btnPropietarios->BackColor = System::Drawing::Color::Teal;
			this->btnPropietarios->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnPropietarios->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPropietarios->Location = System::Drawing::Point(0, 92);
			this->btnPropietarios->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnPropietarios->Name = L"btnPropietarios";
			this->btnPropietarios->Size = System::Drawing::Size(219, 62);
			this->btnPropietarios->TabIndex = 1;
			this->btnPropietarios->Text = L"Propietarios";
			this->btnPropietarios->UseVisualStyleBackColor = false;
			this->btnPropietarios->Click += gcnew System::EventHandler(this, &Principal::btnPropietarios_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(219, 92);
			this->panel1->TabIndex = 0;
			// 
			// pnlFormularios
			// 
			this->pnlFormularios->BackColor = System::Drawing::Color::Teal;
			this->pnlFormularios->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlFormularios->Location = System::Drawing::Point(219, 0);
			this->pnlFormularios->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pnlFormularios->Name = L"pnlFormularios";
			this->pnlFormularios->Size = System::Drawing::Size(824, 484);
			this->pnlFormularios->TabIndex = 1;
			// 
			// Principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1043, 484);
			this->Controls->Add(this->pnlFormularios);
			this->Controls->Add(this->pnlBotones);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximumSize = System::Drawing::Size(1061, 531);
			this->MinimumSize = System::Drawing::Size(1061, 531);
			this->Name = L"Principal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alquileres Turisticos";
			this->pnlBotones->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 

	System::Void btnInquilinos_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->pnlFormularios->Controls->Count > 0)//comprueba si el pnlformularios contiene algun control
			this->pnlFormularios->Controls->RemoveAt(0);//si es mayor que cero si elimina el primer control

	//crea una nueva ventana y la agrega al pnlformularios de modo que lla ventana se muetra al usuario
		Inquilinos ^inquilinos = gcnew Inquilinos;
		inquilinos->TopLevel = false;
		inquilinos->Dock = DockStyle::Fill;			
		this->pnlFormularios->Tag = inquilinos;
		this->pnlFormularios->Controls->Add(inquilinos);
		inquilinos->Show();
	}
	//crea una nueva instancia de la clase ,la configurapara ser un control segundario en el pnlformularos y la agrga para que se muestre
	System::Void btnPropietarios_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->pnlFormularios->Controls->Count > 0)
			this->pnlFormularios->Controls->RemoveAt(0);
		Propietarios ^propietarios = gcnew Propietarios;
		propietarios->TopLevel = false;
		propietarios->Dock = DockStyle::Fill;
		this->pnlFormularios->Tag = propietarios;
		this->pnlFormularios->Controls->Add(propietarios);
		propietarios->Show();
	}

	private: System::Void btnViviendas_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->pnlFormularios->Controls->Count > 0)
			this->pnlFormularios->Controls->RemoveAt(0);
		Viviendas ^viviendas = gcnew Viviendas;//para indicar que la variable viviendas es un puntero de referencia a un objeto
		viviendas->TopLevel = false;//indica que no es formulario principal sino que se mostrara en el pnlformularios
		viviendas->Dock = DockStyle::Fill;//indica que el objeto debe ajustarse al contenedor padre
		this->pnlFormularios->Tag = viviendas;
		this->pnlFormularios->Controls->Add(viviendas);
		viviendas->Show();
	}

	private: System::Void btnReservas_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->pnlFormularios->Controls->Count > 0)
			this->pnlFormularios->Controls->RemoveAt(0);
		Reservas ^reservas = gcnew Reservas;
		reservas->TopLevel = false;
		reservas->Dock = DockStyle::Fill;
		this->pnlFormularios->Tag = reservas;
		this->pnlFormularios->Controls->Add(reservas);
		reservas->Show();
	}
	
};

}
