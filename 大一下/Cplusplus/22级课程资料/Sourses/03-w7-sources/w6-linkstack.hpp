#ifndef LINKED_STACK_H
#define LINKED_STACK_H

#include"w6-linknode.hpp"
#include<iostream>

class LinkedStack {
    public:
        LinkedStack(): head(nullptr) {};
        LinkedStack(const LinkedStack& s) = delete;
        LinkedStack& operator=(const LinkedStack& other) = delete;
        ~ LinkedStack() { 
			clear();
		};
        void push(UserData item) {
            head = head->Push(head,item);
        };
        void pop() {
            if (!isEmpty()) head = head->Pop(head);
        };
        UserData top() {
            if (!isEmpty()) return head->getData();
            return 0;
        };
        bool isEmpty() {
            return !head;
        };
        void clear() {
            while (!isEmpty()) pop();
        };
        
//        LinkedStack(const LinkedStack& s) {
//            LinkedStack* s0 = new LinkedStack();
//            auto temp = s.head;
//            while (temp) {
//            	// std::cout << "push " << temp->getData()<< std::endl;
//                s0->push(temp->getData());
//                temp = temp->getNext();
//            }
//            head = nullptr;
//            while (!s0->isEmpty()) {
//                push(s0->top());
//                s0->pop(); 
//            }
//            delete s0;
//        };
        
    private:
        _LinkNode *head;

};

#endif
