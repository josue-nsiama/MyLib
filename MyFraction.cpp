#include "MyFraction.h"
MyFraction::MyFract(int numn, int demn)
	:num(numn), den(demn) {
	simplifie();
}
MyFraction::MyFract(int nomb) : num(nomb), den(1) {

}
MyFraction::MyFract(void) {

}
template<>
void MyFraction::simplifie() {
	int nombre =pgcd(num, den);
	num /= nombre;
	den /= nombre;
}
std::ostream& operator<<(std::ostream&a,const MyFraction& b) {
	a << b.num << '/' << b.den;
	return a;
}
std::wostream& operator<<(std::wostream&a, const MyFraction& b) {

		a << b.num << L'/' << b.den;
		return a;

}
template<>
MyFraction MyFraction::operator*(const MyFraction&b) {
	int numx=num * b.num;
	int denx=den * b.den;
	return MyFract(numx, denx);
}
MyFraction MyFraction::operator*(int x) {
	int numx=num * x;
	int denx=den * 1;
	return MyFraction(numx, denx);
}
MyFraction MyFraction::operator/(const MyFraction&b) {
	int numx=num*b.den;
	int denx= den*b.num;
	return MyFraction(numx, denx);
}
MyFraction MyFraction::operator=(int x) {
	int numx = x;
	return MyFract(numx);
}
MyFraction MyFraction::inv() {
	int dex = num;
	int nx = den;
	return MyFract(nx,dex);
}
MyFraction::MyFract(const MyFraction&b) {
	operator=(b);
}
MyFraction MyFraction::operator/(int x) {
int	numx = num * 1;
int	denx = den * x;
	return MyFract(numx, denx);
}
template<>
MyFraction MyFraction::operator=(const MyFraction&b) {
	int numx = b.num;
	int denx = b.den;
	return MyFraction(numx, denx);
}
int MyFraction::ration_i() {
	int ratio = (num * 100) / den;
	return ratio;
}
float MyFraction::ratio_f(){
	float_t ratio = (num * 100) / den;
	return ratio;
}
bool MyFraction::operator!=(const MyFraction&a) {
	if (this->num == a.num&&this->den == a.den) {
		return true;
	}
	else
	{
		return false;
	}
}
int pgcd(int a, int b) {
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return a;
}