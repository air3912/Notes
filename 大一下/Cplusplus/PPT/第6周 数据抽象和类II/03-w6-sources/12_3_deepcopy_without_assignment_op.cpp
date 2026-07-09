#include<iostream>
#include<cstring> 

using namespace std;

class NAME {
	public:	
		NAME();
		NAME(const NAME& other);
		~NAME();
		void show();
		void set(const char* s);
	private:  
	    char* str;
};

NAME::NAME():str(nullptr){	
	cout << "Constructing.\n";
}

NAME::NAME(const NAME& other){
    cout << "Copy Constructing.\n";
    if (other.str == nullptr) {
        str = nullptr;
        return;
    }
    str = new char[strlen(other.str) + 1];
    strcpy(str, other.str);
} 

NAME:: ~NAME() {	
	cout << "Destructing.\n";
	if (str != nullptr)  
		delete []str;
}
     
void NAME::show() {	
    cout << str << "\n";	    
}

void NAME::set(const char* s) {	
	if (str!=NULL)	
	    delete []str;
	
	str = new char[strlen(s) + 1];
	
	if (str!=NULL)	
	    strcpy(str, s);
}

void Print(NAME name) {
    name.show();
} 

int main() {	
    NAME *myname = new NAME;
    myname->set("Leetcode");
    
    NAME *yourname = new NAME;
    *yourname = *myname;
    
    yourname->show();
    delete yourname;  
     
    myname->show();
    delete myname;
}
