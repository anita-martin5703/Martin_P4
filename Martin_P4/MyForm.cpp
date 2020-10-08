// Anita Martin
// amartin98@cnm.edu
// First GUI: SimpleCalc

// MyForm.cpp

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MartinP4 ::MyForm form;
	Application::Run(% form);
}