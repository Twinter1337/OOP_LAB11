#include "MyForm1.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	OOPLAB11::MyForm1 form;
	Application::Run(% form);

}