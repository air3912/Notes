 #include<iostream>
using namespace std;



int const_ref_without_casting() {
	int b = 10;
	const int &a = b;
//	a = 12;  //error: assignment of read-only reference
	b = 11;
	printf("a=%d,b=%d\n", a, b);	
}

int const_ref_with_constant() {
	//（2）const引用 常量
	const int &c = 15;
	//编译器会给常量15开辟一片内存，并将引用名作为这片内存的别名
//	int &d=15;  //error: invalid initialization of non-const reference of type 'int&' from an rvalue of type 'int'
	int* p = (int *)&c;  // must casting explicitly
	*p = 10;
	cout << c << endl; 
	
}

int const_ref_with_casting() {
	double b = 3.14;
	const int &a = b; // equal to: int temp = b; const int &a = temp
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
	const_ref_without_casting();
	const_ref_with_constant();
	const_ref_with_casting();
	
	const_ref_in_para("I love c++"); //equal to
//  string s_temp="I...";const_ref_in_para(s_temp);

//	no_const_ref_in_para("I love c++"); //error
	const_ref_in_para(3.14);
//	no_const_ref_in_para(3.14); //error
}
