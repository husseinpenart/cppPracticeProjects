#include <format>
#include <iostream>
#include <string>
using std::format;
using std::cout;

//void func() {
//	static auto i = 10;
//	cout << format("refrence to number {}\n", ++i);
//}
void func(const std::string& s) {
	static auto i = 10;
	cout << format("refrence to string is {}\n", s);
}
int main() {
	//cout << "lesson two started";
	std::string s {"this is a long string as a exmpale"};
	cout << format("value is {}\n" , s);
	func(s);
	//func();
	//func();
	//func();
	//func();
	//func();
	//func();
}