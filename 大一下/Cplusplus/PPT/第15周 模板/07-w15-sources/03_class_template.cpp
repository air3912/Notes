#include <iostream>
#include <string>
#include <stdexcept> 

using namespace std;

/* 类模板：使用链表实现的栈*/
template <typename ElementType>                      
class Stack {
public:
    Stack();
    ~Stack();
    void push(ElementType obj)      throw(std::bad_alloc);
    void pop()                      throw(std::logic_error);
    ElementType getTop() const      throw(std::logic_error);
    bool isEmpty() const;

private:
    /* 栈节点类型 */
    struct Node
    {
        ElementType element;    // 结点中存放的元素
        Node* next;	            // 指向下一结点的指针
	};
	Node* top;  // 栈顶节点
};
/* 构造函数 */
template <typename ElementType>
Stack<ElementType>::Stack()
{
    top = NULL;
}
/* 析构函数 */
template <typename ElementType>
Stack<ElementType>::~Stack()
{
    
}
/* 向栈内压入元素 */
template <typename ElementType>
void Stack<ElementType>::push( ElementType obj ) throw(std::bad_alloc)
{
    Node* temp;
    try {
        temp = new Node;	
        temp -> element = obj;	
        temp -> next = top;	
        top = temp;	
    } 
    catch (std::bad_alloc e) {      // 内存分配失败时进行异常处理
        throw;		                // 重新抛出异常
    }
}
/* 从栈顶弹出元素 */
template <typename ElementType>
void Stack<ElementType>::pop() throw(std::logic_error)
{
    Node* temp;
    if (top != NULL) {	
        temp = top;			
        top = top -> next; 
        delete temp;			
    } 
    else {                          // 栈为空时抛出异常
        throw std::logic_error("pop from empty Stack");
    }
}
/* 获取栈顶元素 */
template <typename ElementType>
ElementType Stack<ElementType>::getTop() const throw(std::logic_error)
{
    if (top != NULL) {	
        return top->element;		
    } 
    else {                          //栈为空时抛出异常
        throw std::logic_error("getTop from empty Stack");
    }
}
/* 判断栈是否为空 */
template <typename ElementType>
bool Stack<ElementType>::isEmpty() const
{
    return top == NULL;
}

int main()
{
    Stack<int> stack;	                    // 实例化一个保存int型元素的栈
    
    for (int i = 1; i < 9; i++)             // 向栈中压入8个元素
	stack.push(i);
	
    while (!stack.isEmpty()) {	            // 栈不为空时循环
	    cout << stack.getTop() << " ";      // 显示栈顶元素
	    stack.pop();			            // 弹出栈顶元素
    }
}
