#pragma once
class MyArray
{
public:
	MyArray(void);
	~MyArray(void);
	MyArray(int contador);
	bool Create(int size);
	void Delete();
	bool Resize(int newSize);
	double *data;
private:
	int contador;
};

