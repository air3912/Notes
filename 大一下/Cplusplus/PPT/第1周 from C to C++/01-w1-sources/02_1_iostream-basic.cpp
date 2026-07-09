/* iostream-basic.cpp */
#include<iostream>
using namespace std;

int main() {
    int someInt;
    float someFloat;
    char someChar;
    // fscanf(stdin,"%d%f%c", some...); 
    cin >> someInt >> someFloat >> someChar;
    // fprintf(stdout,"the answer is: %f\n", some...); 
    cout << "the answer is: " << someInt * someFloat << endl;
    return 0;
}

