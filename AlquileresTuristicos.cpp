#include "pch.h"

#include "Principal.h"


using namespace System;
using namespace System::Windows::Forms;


//[STAThread]
[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AlquileresTuristicos::Principal principal;
	Application::Run(% principal);
	return 0;
}
