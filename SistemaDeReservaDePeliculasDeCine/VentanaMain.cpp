#include "pch.h"
#include "VentanaMain.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WinFormsProject::VentanaMain form;
	Application::Run(%form);
}
