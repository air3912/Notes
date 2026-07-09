#include<cassert>
#include"w6-linknode.hpp"
#include<iostream>
#include<string>

//#define PRINT_MEM
//#include"w6-test-mem.hpp"

extern int new_del_count;

using namespace std;

int test_link_node() {
	_LinkNode* node = NULL;
    _LinkNode* node_9 = node->Push(nullptr,9);
    _LinkNode* node_5 = node->Push(node_9,5);
    _LinkNode* node_1 = node->Push(node_5,1);
    
    _LinkNode* temp = node_1;
    for (int i=1; i<=9; i+=4) {
    	//cout << temp->getData() << endl;
    	assert(temp->getData()==i);
    	temp = temp->getNext();
	}
	
	_LinkNode* node_3 = node_1->insert(3);
	_LinkNode* node_7 = node_5->insert(7);
	
	int i = 1;
	temp = node_1;
	while ( temp ) {
	    assert(temp->getData()==i);
	    //cout << i << endl;
    	temp = temp->getNext();	
    	i = i+2;
	}
	
	node_1->erase();
	node_5->erase();
	
	temp = node_1;
    for (int i=1; i<=9; i+=4) {
    	assert(temp->getData()==i);
    	temp = temp->getNext();
	}
	
	node = node->Pop(node_1);
	node = node->Pop(node);
	assert(node->getData()==9);
	
	return 0;
}



int main() {
	test_link_node();
	if (new_del_count)
		cout << "memory is leaked in func test_link_node " << new_del_count << endl;
//	string s("i love c++");
//	cout << "string constraction also +1£º " << new_del_count << endl;
//	s.~string(); 
//	cout << "string de also -1£º " << new_del_count << endl;
//	s.~string();
//	cout << "string de again -1? " << new_del_count << endl; 
	assert(new_del_count == 0);
}
