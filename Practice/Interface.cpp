#include "Interface.h"
#include "AddAndEdit.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Practice::Interface main_form;
	//Practice::AddAndEdit add_and_edit_form;
	Application::Run(% main_form);
}

