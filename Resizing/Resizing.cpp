#include "stdafx.h"  //________________________________________ Resizing.cpp
#include "Resizing.h"
#include "MyArray.h"
#include "MyText.h"
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Resizing app;
	return app.BeginDialog(IDI_Resizing, hInstance);
}

void Resizing::Window_Open(Win::Event& e)
{
	//MyArray x(3);
	//int i;
	//for (i = 0; i < 3; i++)
	//{
	//x.data[i] = 2.0*i + 1.0;
	//}
	//x.Resize(5);
	//x.data[3] = -3;
	//x.data[4] = -4;
	//wstring texto;
	//for (i = 0; i < 5; i++)
	//{
	//Sys::Format(texto, L"%g\r\n", x.data[i]);
	//tbxSalida.Text += texto;
	//}
	MyText z(L"obuelito");
	const int numero = z.ReplaceChar('o', 'A');
	this->Text = z.Get();
	this->Text += Sys::Convert::ToString(numero);
}

