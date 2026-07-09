//FileIO1.cpp
//功能：说明利用文件流实现文件I/O
#include <fstream>
using namespace std;

int main()
{
    int someInt;
    float someFloat;
    char someChar;
    ifstream inFile;
    ofstream outFile;
    inFile.open("Source.txt");
    outFile.open("Result.txt");

    inFile >> someInt >> someFloat >> someChar;

    outFile << "The answer is: "
            << someInt * someFloat
            << endl;

    inFile.close();
    outFile.close();

    return 0;
}
