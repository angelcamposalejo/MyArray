#pragma once
class MyText
{
public:
	MyText(void);
	~MyText(void);
	MyText(const wchar_t*texto);
	const wchar_t*Get();
	wstring entrada;
	void set(const wchar_t*texto);
	void MakeUpperCase();
	void MakeLowerCase();
private:
	const wchar_t*datos;
};

