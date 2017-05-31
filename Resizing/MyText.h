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
	int ReplaceChar(wchar_t original_character, wchar_t new_character);
private:
	const wchar_t*datos;
};

