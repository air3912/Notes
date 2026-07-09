#include<iostream>
using namespace std;

class Text {
public:	
     Text(const char* s);
     ~Text();
     void Print();
private:
    string s;	
};

Text::Text(const char* s){
    this->s = string(s);
    cout <<"Creating " << this->s << endl; 
}

Text::~Text() {
    cout <<"Releasing " << this->s << endl; 
}

void Text::Print(){
    cout <<"print " << this->s << endl; 
}

int main() {
    Text* str_ptr; 
    Text  str("on stack 1");

    str_ptr = &str;
            
    str.Print(); 
    str_ptr->Print();
}

