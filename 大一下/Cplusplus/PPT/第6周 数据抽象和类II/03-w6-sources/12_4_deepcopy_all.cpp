#include<iostream>
#include<cstring> 

using namespace std;

class NAME {
	public:	
		NAME();
		NAME(const NAME& other);
		NAME& operator=(const NAME& other);
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

NAME& NAME::operator=(const NAME& other) {
	cout << "= operator.\n";
	if (this==&other) return *this;
    if (str != NULL) delete[] str;
        
    if (other.str == NULL) {
        str = NULL;
        return *this;
    }

    str = new char[strlen(other.str) + 1];
    if (str != NULL)
        strcpy(str, other.str);

    return *this;
}

void Print(NAME name) {
    name.show();
} 

int main() {	
    NAME *myname = new NAME;
    myname->set("Leetcode");
    
    Print(*myname);
    
    NAME *yourname = new NAME;
    *yourname = *myname;
    
    yourname->show();
    delete yourname;  
     
    myname->show();
    delete myname;
}
