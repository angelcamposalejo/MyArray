#include "stdafx.h"
#include "MyText.h"


MyText::MyText(void)
{
}
MyText::MyText(const wchar_t*texto)
{
	datos = texto;
	entrada = texto;
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
	int cont = entrada.length();
	for (int i = 0; i < cont; i++)
	{
		entrada[i] = toupper(entrada[i]);
	}
	this->datos = entrada.c_str();
}
int MyText::ReplaceChar(wchar_t original_character, wchar_t new_character)
{
	int contador = 0;
	for (int i = 0; i < entrada.length(); i++)
	{
		if (entrada[i] == original_character)
		{
			entrada[i] = new_character;
			contador++;
		}
	}
	this->datos = entrada.c_str();
	return contador;
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
