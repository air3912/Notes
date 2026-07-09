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
    str_ptr = new Text("on heap 1");
    //调用构造函数会在栈上分配一个临时对象 
    Text("on stack 1");  
     
    str_ptr->Print();
    
    //delete str_ptr; //重要，堆空间对象不会自动析构 
}

