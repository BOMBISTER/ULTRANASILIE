#include "MenuForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array <String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	LazerUI::MenuForm form; 
	Application::Run(% form);
}

