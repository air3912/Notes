 #include<iostream>
using namespace std;

int const_ref_with_rvalue() {
    // const引用右值 
    const int &c = 15;
    //编译器会给常量15一个临时空间，并赋予别名
    //等价: int temp=rValue; const int &c=temp; 
//    int &d=15;  //error: invalid initialization of non-const reference of type 'int&' from an rvalue of type 'int'
    int* p = (int *)&c;  // must casting explicitly. . p 指向临时空间
    *p = 10;
    cout << c << endl;     
}

int const_ref_without_casting() {
    int b = 10;
    const int &a = b;
//    a = 12;  //error: assignment of read-only reference
    b = 11;
    printf("a=%d,b=%d\n", a, b);    
}

int const_ref_with_casting() {
    double b = 3.14;
    const int &a = b; //等于: int temp = b; const int &a = temp
    b = 11;
    printf("a=%d,b=%lf\n", a, b);    
}

int const_ref_in_para(const string& s) {
    cout << s << endl;
}

int no_const_ref_in_para(string& s) {
    cout << s << endl;
}

int const_ref_in_para(const int& s) {
    cout << s << endl;
}

int no_const_ref_in_para(int& s) {
    cout << s << endl;
}

int main()
{
    cout << "const_ref_with_rvalue..." << endl;
    const_ref_with_rvalue();
    cout << "const_ref_without_casting..." << endl;
    const_ref_without_casting();
    cout << "const_ref_with_casting..." << endl;
    const_ref_with_casting();
    
    cout << "const_ref_in_para..." << endl;
    const_ref_in_para("I love c++"); //equal to
//  string s_temp="I...";const_ref_in_para(s_temp);

//    no_const_ref_in_para("I love c++"); //error
    const_ref_in_para(3.14);
//    no_const_ref_in_para(3.14); //error
}
