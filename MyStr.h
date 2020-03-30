#pragma once
#include<string.h>
#include<string>
#include<iostream>
template<class T>
class MyStr
{
public:
	MyStr(void);
	MyStr(const T* __STR);
	MyStr operator=(const MyStr& autre);
	MyStr operator=(const char* __STR);
	friend std::ostream& operator<<(std::ostream& so, const MyStr& a);
	char append();
private:
	const T*STR;
	int len;
};
typedef MyStr<char> String;
typedef MyStr<wchar_t>Wstring;
typedef MyStr<char32_t>String32;


