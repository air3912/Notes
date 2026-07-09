#include<iostream>
#include<stdexcept>
using namespace std;

class Stack {    
    struct ListNode {
        int val;
        struct ListNode *next;
    }; 
    
  public:
    Stack() = default;
    //必须禁止复制构造和赋值 
    Stack(const Stack&) = delete;
    Stack& operator=(const Stack& other) = delete;
    ~Stack() { clear(); }
    
    void push(int val) {
        ListNode *node = new ListNode;
        node->val = val;
        node->next = head; 
        head = node;
    }
    void pop() {
        if (!isEmpty()) {
            ListNode *node = head;
            head = head->next;
            delete node;
        }
    }
    int top() {
        if (!isEmpty()) return head->val;
        throw runtime_error("Accessing empty stack.");
    }
    bool isEmpty() {
        return !head;
    }; 
    void clear() {
        while (!isEmpty()) pop();
    }  
    
    void print(){
        cout << "(";
        for (ListNode *p=head; p!=nullptr; p=p->next) {
            cout<<p->val<<",";
        }
        cout << ")"<<endl;
    } 
    
  private:
    ListNode *head=nullptr;
};

int main() {
    Stack s;
    s.print();
    //s.top();
    
    s.push(7);
    s.push(24);
    cout << s.top() << endl;
    s.print();
    s.pop();
    s.push(8);
    s.push(9);
    s.print();
    
    s.clear();
    s.print();
    
    //Stack s1=s;
    
    return 0;
}
