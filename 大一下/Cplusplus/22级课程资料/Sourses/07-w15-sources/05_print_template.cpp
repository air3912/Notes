#include <iostream>
#include <string>

using namespace std;

/* 数组的引用或指针 */
template <typename T, int N>
void printValues(T (&arr)[N]) {
	cout << "(T&)[" << N << "]\n";
    for (int i = 0; i != N; ++i)
	    cout<< arr[i] << ","; 
	cout << endl;
}

// EX1: 请改对该程序 
template <typename T, int N>
void printValues(T (*arr)[N]) {
	cout << "(T*)[" << N << "]\n"; 
    for (int i = 0; i != N; ++i)
	    cout<< arr[i] << ","; 
	cout << endl;
}

/* 不使用非模板形参实现 */
template <typename T>
void printValues(T* arr, int N) {
	cout << "T*" << "\n";
    for (int i = 0; i != N; ++i)
	    cout<< arr[i] << ","; 
	cout << endl;
}

int main()
{
    int intArr[6] = {1, 2, 3, 4, 5, 6};
    double dblArr[4] = {1.2, 2.3, 3.4, 4.5};

    // 生成函数实例printValues(int (&) [6])
    printValues(intArr);	
    // 生成函数实例printValues(double (&) [4])
    printValues(dblArr);
	//重载 ?
	printValues(&dblArr);
	//  
	printValues(intArr, 6);	
    
    return 0;
}
