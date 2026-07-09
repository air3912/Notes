#include <fstream> //FileIOBinaryAppend.cpp
#include <iostream>
using namespace std;

int main()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int b[10], i;
    ifstream inFile;
    ofstream outFile;

    outFile.open("1.dat", ios::binary | ios::app);
    for (i = 0; i < 10; i++)
    {
        outFile.write((char *)&a[i], sizeof(a[i]));
    }
    outFile.close();

    return 0;
}
