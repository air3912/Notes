// elementDeleteDemo.cpp 功能： 演示顺序容器的元素删除操作
#include <iostream>
#include <deque>
using std::cout;using std::deque;using std::endl;

template<typename T>
void print(T beg, T end){
	for (auto it = beg; it != end; it++)
		cout << *it << ' ';
	cout << endl;
}

int main()
{
	deque<int> ideq = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// 输出删除操作之前deque容器中的所有元素
	cout << "before delete:" << endl;
	print(ideq.begin(),ideq.end());

	// 删除容器中的第一个及最后一个元素
	ideq.pop_front();
	ideq.pop_back();

	cout << "the first and last element are deleted:" << endl;
	print(ideq.begin(),ideq.end());

	auto iter = ideq.begin();			// iter指向ideq中现存的第0个元素
	ideq.erase(ideq.erase(iter + 1)); 	// 删除ideq中现存的第1、第2个元素
									  	// 输出删除操作之后list容器中的所有元素
	cout << "the second and third element are deleted:" << endl;
	print(ideq.begin(),ideq.end());

	// 删除容器中现存的前三个元素
	ideq.erase(ideq.begin(), ideq.begin() + 3);

	// 输出删除操作之后list容器中的所有元素
	cout << "three elements at front are deleted:" << endl;
	print(ideq.begin(),ideq.end());

	// 删除剩余的所有元素
	ideq.clear();
	cout << "after clear:" << endl;
	if (ideq.empty()) // 容器为空
		cout << "no element in double-ended queue" << endl;

	return 0;
}
