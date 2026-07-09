/*new-delete-strings-demo*/ 
#include <iostream>   
#include <string>
 
int main() {
    // 为 n 个 string 对象的数组分配空间
    int n = 4;
    std::string *p = new std::string[n] {
        std::string(5, 'a'),
        std::string(5, 'b'),
        std::string(5, 'c'),
        std::string(5, 'd')
        };

    for(int i=0; i<n; i++) {
        std::cout << p[i] << std::endl;
    }

    delete []p;
}
