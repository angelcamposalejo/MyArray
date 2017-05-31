#include "stdafx.h"
#include "MyText.h"


MyText::MyText(void)
{
}
MyText::MyText(const wchar_t*texto)
{
	datos = texto;
}
MyText::~MyText(void)
{
}
void MyText::set(const wchar_t*texto)
{
	this->entrada = texto;
	this->datos = texto;
}
const wchar_t*MyText::Get()
{
	return datos;
}
void MyText::MakeUpperCase()
{
	wstring copia = entrada;
	int cont = entrada.length();
	for (int i = 0; i < cont; i++)
	{
		entrada[i] = toupper(entrada[i]);
	}
	this->datos = entrada.c_str();
}
void MyText::MakeLowerCase()
{
	wstring copia = entrada;
	int cont = entrada.length();
	for (int i = 0; i < cont; i++)
	{
		entrada[i] = tolower(entrada[i]);
	}
	this->datos = entrada.c_str();
}
