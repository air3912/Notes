#include<iostream>
using namespace std;

class Animal {
    public:
        void virtual eat() {
            cout << "I like food!" << endl;
        };
};

void whatDoYouPrefer(Animal &animal) {
	animal.eat();
} 

class Dog:public Animal {
    public:
        void eat() {
            cout << "I like bones!" << endl;
        };
        ~Dog() {cout << "auto destructed!\n";};
};

class Cat:public Animal {
    public:
        void eat() {
            cout << "I like fishes!" << endl;
        };
};


int main() {
	Animal &&cat=Cat(), &&dog=Dog(); //神奇的语法是？ 
	Cat temp;
//	Animal &cat=temp; 
	whatDoYouPrefer(temp);
	whatDoYouPrefer(dog);
	
	//ex: 请完成Bear类 
//	Bear bear;
//	whatDoYouPrefer(bear); 
}
