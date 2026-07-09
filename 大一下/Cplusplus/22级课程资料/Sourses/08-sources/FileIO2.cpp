// FileOI2.cpp
#include <fstream>
using namespace std;

int main()
{
    char c;
    ifstream inFile;
    ofstream outFile;

    inFile.open("1.txt");
    outFile.open("2.txt");
    inFile >> c;
    while (inFile)
    {
        outFile << c;
        inFile >> c;
    }

    inFile.close();
    outFile.close();

    return 0;
}
