#include "MyStr.h"
String::MyStr(const char*__STR) {
	len = strlen(__STR)+1;
	STR = new char[len];
	STR= __STR;
}
String String::operator=(const char*__STR) {
	len = strlen(__STR) + 1;
	STR = new char[len];
	STR = __STR;
	return STR;
}
std::ostream& operator<<(std::ostream& so, const String& a) {
	so << a.STR;
	return so;
}
String::MyStr(void) {
}
