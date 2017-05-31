#include "stdafx.h"
#include "MyArray.h"


MyArray::MyArray(void)
{
	data = NULL;
	contador = 0;
}

MyArray::MyArray(int contador)
{
	data = new double[contador];
	if (data != NULL)
	{
		this->contador = contador;
	}
	else
	{
		this->contador = 0;
	}
}
bool MyArray::Create(int contador)
{
	Delete();
	data = new double[contador];
	if (data == NULL)return false;
	this->contador = contador;
}
void MyArray::Delete()
{
	if (data != NULL)
	{
		delete[]data;
		data = NULL;
	}
}
bool MyArray::Resize(int newSize)
{
	double *tmp = new double[newSize];
	if (tmp == NULL)return false;
	for (int i = 0; i < contador; i++)
	{
		tmp[i] = data[i];
	}
	delete[]data;
	data = tmp;
	this->contador = newSize;
	return true;
}
MyArray::~MyArray()
{
	if (data != NULL)delete[]data;
}
