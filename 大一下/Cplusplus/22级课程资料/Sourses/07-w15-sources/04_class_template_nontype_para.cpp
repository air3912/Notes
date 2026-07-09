#include <iostream>
#include <string>
#include <stdexcept> 
#include <cstring> 

using namespace std;

/* 非模板形参实例1 */
/* 类模板：使用数组实现的栈*/
template <typename ElementType, int N>                      
class Stack {
public:
    Stack();
    ~Stack();
    void push(ElementType obj);      
    void pop();                      
    ElementType getTop() const;     
    bool isEmpty() const;

private:
    /* 栈节点类型 */
    ElementType elements[N];
    int count;
};
/* 构造函数 */
template <typename ElementType, int N>    
Stack<ElementType, N>::Stack()
{
    memset(elements, 0, sizeof(elements));
    count = 0;
}
/* 析构函数 */
template <typename ElementType, int N>    
Stack<ElementType, N>::~Stack()
{
    
}
/* 向栈内压入元素 */
template <typename ElementType, int N>    
void Stack<ElementType, N>::push( ElementType obj )
{
    elements[count++] = obj;
}
/* 从栈顶弹出元素 */
template <typename ElementType, int N>    
void Stack<ElementType, N>::pop()
{
    count--;
}
/* 获取栈顶元素 */
template <typename ElementType, int N>    
ElementType Stack<ElementType, N>::getTop() const 
{
    return elements[count-1];
}
/* 判断栈是否为空 */
template <typename ElementType, int N>    
bool Stack<ElementType, N>::isEmpty() const
{
    return count == 0;
}

int main()
{
    Stack<int, 10> stack;	                // 实例化一个保存int型元素的栈
    
    for (int i = 1; i < 9; i++)             // 向栈中压入8个元素
	stack.push(i);
	
    while (!stack.isEmpty()) {	            // 栈不为空时循环
	    cout << stack.getTop() << " ";      // 显示栈顶元素
	    stack.pop();			            // 弹出栈顶元素
    }
}
