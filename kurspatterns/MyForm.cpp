#include "MyForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
	setlocale(LC_ALL, "Russian");
	Save = fopen("save.txt", "r");
	fscanf(Save, "%i", &conto);
	char *aa1 = new char();
    char *aa2 = new char();
	swg->eski = new Facade();
    int aa3, aa4, aa5;
	for (int i = 0; i < conto; i++)
	{
		fscanf(Save, "%i %s %s %i %i", &aa3, aa1, aa2, &aa5, &aa4);
		swg->eski->creati(aa1, aa2, i, aa4, aa5);
		aa1 = new char();
		aa2 = new char();
	}
	fclose(Save);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	kurspatterns::MyForm Form;
	Application::Run(%Form);
}
