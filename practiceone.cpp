//
//#include <format>
//#include <iostream>
//#include <typeinfo>
//#include <vector>
//#include <cstdint>
//
//using std::format;
//using std::cout;
//int func(int i, const char* s) {
//    cout << format("this is i result {}   {}\n", i, s);
//    return i * 2;
//}
//const size_t byte{ 8 };
//using std::format;
//using std::cout;
//
//int func() {
//    //int x{ 7 };
//    static int x{ 7 };
//    return ++x;
//}
//
////instead of typedef when can use "using" experimental  on it +++++++++
////typedef uint32_t points_t;
////typedef uint64_t rank_t;
//using points_t = uint32_t;
//using rank_t = uint64_t;
//struct score {
//    points_t p{};
//    rank_t r{};
//};
//struct S {
//    int i{};
//    double d{};
//    const char* s{};
//};
//
//struct catalog_card {
//    const char* title{};
//    const char* author{};
//    const char* publisher{};
//    const char* subject{};
//    const char* isbn{};
//    const char* oclc{};
//    short int ddc1{};
//    short int ddc2{};
//    short int year_pub{};
//    short int year_acq{};
//    short int quantity{};
//};
//int main() {
//    //variable 
//    //auto x = 42;
//    //auto y = 58;
//    ////conditoion 
//    ///*   if (x > y) {
//    //    cout << "condition is true\n";
//    //}
//    //else {
//    //    cout << "condition is false\n";
//    //}*/
//    //auto s = x < y ? "Yes" : "no";
//    //cout << format("answer is {}\n", s);
//    // +++++++++++++++++++++++++ for loop +++++++++++++++++++++
//    //int array[]{ 1, 2, 3, 4, 5 };
//    //int i{ 0 };
//    //const char   string[]{ "string char" };
//    //while (i < 5) {
//    //    //if (i == 3) break;
//    //    if (i == 2) {
//    //        cout << format("your number 2 is breaked\n");
//    //        i++;
//    //        continue;
//    //    }
//    //    cout << format("element {} is {}\n", i, array[i]);
//    //    ++i;
//    //}
//    //for (int i = {0}; string[i]; i++)
//    //{
//    //    cout << format("element {} is {}\n", i, string[i]);
//    //}
// /*   for (auto* p = string; *p; ++p)
//    {
//        cout << format("char {} is {}\n", *p);
//    }*/
//    // +++++++++++++++++++++++++ for loop +++++++++++++++++++++
//    //+++++++++++++++++ range loop for ++++++++++++
//    //int array[]{ 1, 2, 3, 4, 5 };
//
//    //for (const auto& e : array) {
//    //    cout << format("element is {}\n", e);
//    //}
//    //+++++++++++++++++ range loop for ++++++++++++
//
//    //=================== functions =========================
//   // cout << "this is main()\n";
//   //auto x  = func(444 , "this is number");
//   //cout << format("x is {} \n", x);
//    //=================== functions =========================
//
//    //================================= float types ==========================================
//    //float f{10e2};
//    //double df{};
//    //long double ldf{};
//
//    //cout << format("size of float f is {} bits\n", sizeof(f) * byte);
//    //cout << format("size of double df is {} bits\n", sizeof(df) * byte);
//    //cout << format("size of long double ldf is {} bits\n", sizeof(ldf) * byte);
//    //cout << format("value of f is {}\n", f);
//    //================================= float types ==========================================
//    //============================== auto types ===============================================
// /*   std::string s{ "This is a string" };
//    auto x = s;
//    cout << format("x is {}\n", x);
//    cout << format("type of x is {}\n", typeid(x).name());*/
//
//    //std::vector<int> vi{ 1, 2, 3, 4, 5 };
//    //for (auto it = vi.begin(); it != vi.end(); ++it) { //std::vector<int>::iterator it was befor c++ 11 when can use auto instead
//    //    cout << format("int is {}\n", *it);
//    //    cout << format("type of it is {}\n", typeid(it).name());
//    //}
//    // 
//
//    //============================== auto types ===============================================
//
//    //============================ qualifier ======================================================
//    //int i{ 42 };
//    //cout << format("The integer is {}\n", i);
//    //cout << format("function return {}\n", func()); //if we use static we get this function add one and one not only the x value of func 
//    //cout << format("function return {}\n", func());
//    //cout << format("function return {}\n", func());
//    //cout << format("function return {}\n", func());
//    //cout << format("function return {}\n", func());
//    //============================ qualifier ======================================================
//        //============================ type-def ======================================================
//  /*  score s{ 5, 1 };
//    cout << format("score s had {} points and a rank of {}\n", s.p, s.r);*/
//    //============================ type-def ======================================================
////================ array =======================
////int array[]{ 1, 2, 3, 4, 5 };
////for (const int& i : array) {
////    cout << format("{} ", i);
////}
////cout << '\n';
////================ array =======================
////================ c-string =======================
////const char s[]{ "this is an string" };
////cout << format("{}\n" , s);
//
////================ c-string =======================
//
////++++++++++++++++++++ structure ++++++++++++++++++++++++++
////S s1{ 3, 47.9, "string one" };
////auto* sp = &s1; 
////sp->d = 173.0;
//
////cout << format("s1: {}, {}, {}\n", sp->i, sp->d, sp->s);
////++++++++++++++++++++ structure ++++++++++++++++++++++++++
////cart catelog project 
//    catalog_card lc1{
//       "The CGI Book", "William E. Weinman", "New Riders",
//       "CGI (Computer network protocol)",
//       "1562055712 9781562055714", "477166381",
//       510, 78, 1996, 1997, 2
//    };
//
//    cout << format("Title: {}\n", lc1.title);
//    cout << format("Author: {}\n", lc1.author);
//    cout << format("Publisher: {}\n", lc1.publisher);
//    cout << format("Subject: {}\n", lc1.subject);
//    cout << format("ISBN: {}\n", lc1.isbn);
//    cout << format("WorldCat (OCLC): {}\n", lc1.oclc);
//    cout << format("Dewey Decimal: {}.{}\n", lc1.ddc1, lc1.ddc2);
//    cout << format("Year published: {}\n", lc1.year_pub);
//    cout << format("Year acquired: {}\n", lc1.year_acq);
//    cout << format("Quantity: {}\n", lc1.quantity);
//    //cart catelog project 
//
//}
