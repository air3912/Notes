#include <iostream>
using namespace std;

class FOO {
	public:	
       	FOO(int i):member(i) {
		   	cout << "Constructing " << i << endl;
		}
	    FOO(const FOO& other) {	
			cout << "Copy constructing "
				<< other.member <<  endl;
			member = other.member;
	    }		
	    ~FOO() {	
			cout << "Destructing.\n";  
		}
	    int get() {
			return member; 	
		}
	private:		
      int member;
};

void display (FOO obj) {    
    cout << obj.get() << "\n";  
}

FOO get_foo() {    
	int value;
	cout<< "Input an integer:";
	cin>>value;
	
	FOO obj(value);
	//... 
	return obj;
}

int main() {	
	 FOO obj1(15);       // 调用一般的构造函数
	
	 FOO obj2 = obj1;   // 调用拷贝构造函数
	
	 display(obj2);    // 调用拷贝构造函数用实参obj2初始化形参obj
	                   // 函数结束释放对象obj2 
	
	 obj2=get_foo();   // 不会调用拷贝构造函数创建作为返回结果的临时对象
	                   // 调用一般构造函数，赋值后释放临时对象 
	
	 display(obj2);    // ...
	
	 return 0;   //按声明自动变量逆顺序释放 obj2,obj1 
}
