// containerCompare.cpp  功能： 演示顺序容器的比较操作
#include <iostream>
#include <list>
#include <vector>
#include <string>
using std::list; using std::vector; using std::string;
using std::cout; using std::endl;

template<typename T>
void print(T beg, T end){
	for (auto it = beg; it != end; it++)
		cout << *it << ' ';
	cout << endl;
}

int main()
{
    int iarr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int> ilist1(iarr, iarr+10);
    list<int> ilist2(iarr, iarr+5);
    list<int> ilist3(ilist2);
    list<int> ilist4(ilist2);
   
    ilist4.push_back(12);
    ilist4.push_back(7);
    
    //print all
    vector<string> name = {"list1","list2","list3","list4"};
    vector<list<int>> vec_list = {ilist1,ilist2,ilist3,ilist4};
    for (int i = 0; i < 4; i++) {
    	cout << name[i] << ": ";
		print(vec_list[i].begin(),vec_list[i].end());
	}
	
	//containerCompare
	cout << "ilist2 == ilist3 : ";
	if (ilist2 == ilist3)
		 cout << "true" << endl;
	else
		cout << "false" << endl;
	
    cout << "ilist1 < ilist2 : ";
	if (ilist1 < ilist2)
		 cout << "true" << endl;
	else
		cout << "false" << endl;
	
    cout << "ilist3 > ilist4 : ";
	if (ilist3 > ilist4)
		 cout << "true" << endl;
	else
		cout << "false" << endl;
		
	cout << "ilist1 < ilist4 : ";
	if (ilist1 < ilist4)
		 cout << "true" << endl;
	else
		cout << "false" << endl;
	
    cout << "ilist2 != ilist4 : ";
	if (ilist2 != ilist4)
		 cout << "true" << endl;
	else
		cout << "false" << endl;
}
