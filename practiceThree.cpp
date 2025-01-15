//#include <format>
//#include <iostream>
//#include <string>
//using std::format;
//using std::cout;
////simpleCalssses
//class C1 {
//    int c1val{};
//public:
//    void setvalue(int value);
//    int getvalue();
//};
//void C1::setvalue(int value) {
//    c1val = value;
//}
//int C1::getvalue() {
//    return c1val;
//}
//
////struct types 
//struct MyStruct
//{
//    int ia{};
//    int ib{};
//    int ic{};
//
//};
//
////accessor 
//class A {
//    int ia{};
//    int ib{};
//    int ic{};
//public:
//    A(int a, int b, int c) : ia(a), ib(b), ic(c) {}
//    void seta(int a) { ia = a; }
//    void setb(int b) { ib = b; }
//    void setc(int c) { ic = c; }
//    int geta() const { return ia; }
//    int getb() const { return ib; }
//    int getc() const { return ic; }
//};
////accessor 
//
//int main() {
//    //C1 o1;
//    //o1.setvalue(47);
//    //MyStruct o1{ 47,45,455 };
//    //cout << format("value is {}\n", o1.ia,o1.ib, o1.ic);
//
//    A o1{ 47, 73, 103 };
//    cout << format("ia {}, ib {}, ic {}\n", o1.geta(), o1.getb(), o1.getc());
//}