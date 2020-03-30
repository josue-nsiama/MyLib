#pragma once
#include<iostream>
#include<cmath>
template<typename T>
class MyFract
{
public:
	MyFract(void);
	MyFract(T denm, T numn);
	MyFract(T numb);
	MyFract(const MyFract&b);
    MyFract operator /(int x);
	MyFract operator*(T multi);
	MyFract operator / (const MyFract& b);
friend	std::ostream& operator<<(std::ostream& ex, const MyFract& b);
MyFract operator *(const MyFract&a);
MyFract inv();
MyFract operator=(T x);
MyFract operator=(const MyFract&b);
friend std::wostream& operator<<(std::wostream& ex, const MyFract& a); 
int ration_i();
float ratio_f();
double ratio_d();
long double ratio_lf();
bool operator !=(const MyFract& b);
private:
	T den;
	T num;
	void simplifie();
};
int pgcd(int x, int z);
typedef MyFract<int> MyFraction;
typedef MyFract<short> uFract16;
typedef MyFraction Fraction;

