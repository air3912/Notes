#include <iostream> //FileIOSeek.cpp
#include <fstream>
using namespace std;
int main()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int b[10];
    int i;
    ifstream inFile;
    ofstream outFile;

    outFile.open("1.dat", ios::binary);
    for (i = 0; i < 10; i++)
    {
        outFile.write((char *)&a[i], sizeof(a[i]));
    }
    outFile.close();
    inFile.open("1.dat", ios::binary);

    for (i = 0; i < 10; i++)
    {
        inFile.read((char *)&b[i], sizeof(&b[i]));
        inFile.seekg(sizeof(int), ios::cur);
    }

    inFile.close();

    for (i = 0; i < 10; i++)
        cout << b[i] << "  ";

    return 0;
}
