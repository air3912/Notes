#include <iostream>
using namespace std;

class FOO {
	public:	
       	FOO(int i) {
		   	cout << "Constructing " << i << endl;
			member = i;
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

int main()
{	
	 FOO obj1(15);       // 调用一般的构造函数
	
	 FOO obj2 = obj1;   // 调用拷贝构造函数
	
	 display(obj2);    // 调用拷贝构造函数用实参obj2初始化形参obj
	
	 obj2=get_foo(); // 调用拷贝构造函数创建作为返回结果的临时对象
	
	 display(obj2);
	
	 return 0;
}
