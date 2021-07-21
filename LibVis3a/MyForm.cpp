//Логарифмическая спираль 
//y = 0,5x^e

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	LibVis3a::MyForm form;
	Application::Run(%form);
}
