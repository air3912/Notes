#include<cassert>
#include"w6-linkstack.hpp"
#include"w6-arraystack.hpp"
#include<iostream>

using namespace std;
extern int new_del_count;

int link_stack_test() {
    LinkedStack s;
    assert(s.isEmpty());
    assert(s.top() == 0);
    
    s.push(7);
    assert(s.top()==7);
    assert(!s.isEmpty());
    s.pop(); 
    assert(s.isEmpty());
    assert(s.top() == 0); 
	
	s.push(7);
	s.push(3);
	s.push(1); 
	assert(s.top() == 1);
	s.pop();
	//std::cout << s.top() << std::endl;
	s.push(5);
	assert(s.top() == 5);
	s.pop();
	assert(s.top() == 3);
	
	s.clear();
    assert(s.isEmpty());
    assert(s.top() == 0);	
    
    s.push(7);
	s.push(3); //destructor will release them
    
    //test copy constructor
//	s.push(1);	
//    LinkedStack s1(s);
//    s.clear();
//    //std::cout << s1.top() << std::endl;
//    assert(s1.top() == 1);
//    s1.pop();
//    s1.pop();
//    assert(s1.top() == 7);
//    s1.pop();
//    assert(s.isEmpty());
    
    //error: use of deleted function
//	s1 = s;
	return 0;
}

int array_stack_test() {
    ArrayStack s;
    assert(s.isEmpty());
    assert(s.top() == 0);
    
    s.push(7);
    assert(s.top()==7);
    assert(!s.isEmpty());
    s.pop(); 
    assert(s.isEmpty());
    assert(s.top() == 0); 
	
	s.push(7);
	s.push(3);
	s.push(1); 
	assert(s.top() == 1);
	s.pop();
	//std::cout << s.top() << std::endl;
	s.push(5);
	assert(s.top() == 5);
	s.pop();
	assert(s.top() == 3);
	
	s.clear();
    assert(s.isEmpty());
    assert(s.top() == 0);	
    
    s.push(7);
	s.push(3);

    //test copy constructor
	s.push(1);	
    ArrayStack s1(s);
    s.clear();
    //std::cout << s1.top() << std::endl;
    assert(s1.top() == 1);
    s1.pop();
    s1.pop();
    assert(s1.top() == 7);
    s1.pop();
    assert(s.isEmpty());
    
    //test assignment op
//	s1 = s;

	//s.~ArrayStack();
	return 0;
}


int main() {
	link_stack_test();
	cout << "Link Stack MemoryLeak " << new_del_count << endl;
	array_stack_test();
    cout << "Array Stack MemoryLeak " << new_del_count << endl;
	return 0;
}
