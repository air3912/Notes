/* ns-embed.cpp */
#include<iostream>
using namespace std;

namespace sysu {
    namespace students {
        int collegeCount;
        void printColleges();
    }
}

void sysu::students::printColleges() {
    cout << "Colleges " << collegeCount << endl;
}


int main() {
    using namespace sysu::students;
    collegeCount = 23;
    printColleges();
    return 0;
}
 
