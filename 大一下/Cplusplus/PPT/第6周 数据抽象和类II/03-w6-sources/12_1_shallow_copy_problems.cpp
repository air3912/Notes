#include<iostream>
#include<cstring> 

using namespace std;

class NAME {
	public:	
		NAME();
		~NAME();
		void show();
		void set(const char* s);
	private:  
	    char* str;
};

NAME::NAME():str(nullptr){	
	cout << "Constructing.\n";
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
    Print(*myname);
	myname->show();
	delete myname;
}
