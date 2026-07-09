#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include"w6-linknode.hpp"
#include"cstring"
#include<iostream>

class ArrayStack {
    public:
        ArrayStack() {
        	stack = new UserData[MAX_SIZE]{0};
		};
        ArrayStack(const ArrayStack& other) {
        	//ArrayStack(); //correct?
        	stack = new UserData[MAX_SIZE];
        	memcpy(stack, other.stack, sizeof(UserData) * MAX_SIZE); //correct?
			head = other.head;	
		} ;//= delete;
        ArrayStack& operator=(const ArrayStack& other) = delete;
        ~ ArrayStack() { 
			clear();
			delete []stack;
		};
        void push(UserData item) {
        	if (head < MAX_SIZE)
            	stack[++head] = item;
        };
        void pop() {
            if (!isEmpty()) head--;
        };
        UserData top() {
            if (!isEmpty()) return stack[head];
            return 0;
        };
        bool isEmpty() {
            return head == -1;
        };
        void clear() {
            while (!isEmpty()) pop();
        };
    private:
        UserData *stack;
        int head = -1 ; // just as initial list in constructors
        const static int MAX_SIZE = 100;  
};

#endif
