#include <vector>
#include <iostream>                                                             // exp1.cpp
using namespace std;

int main()
{
    
    vector<int> ivec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};            // ivec包含10个元素，值分别为0~9

    ivec.front() = 100;                                          // 将第0个元素修改为100
    cout << "the first element: " << ivec[0] << endl;            // 输出第0个元素的值

    ivec[1] = 102; // 将第1、第2个元素修改为102、103
    ivec.at(2) = 103;
     
    cout << "the second element: " << ivec.at(1) <<endl;          //输出第1、第2个元素的值
    cout << "the third element: " << ivec[2] << endl;
     
    ivec.back() = 999;                                           //将最后一个元素修改为999

    cout << "the last element: " << ivec[9] << endl;             // 输出最后一个元素的值
}
