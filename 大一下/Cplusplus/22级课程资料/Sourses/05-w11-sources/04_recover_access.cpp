#include <iostream>
#include <cstdio>
using namespace std;

class BASE {
public:
    void set_i(int x)
    {
        i = x;
    }
    int get_i()
    {
        return i;
    }
protected:
    int i;
};

class DERIVED : private BASE {
public:
    using BASE::set_i;   // 访问声明
    using BASE::i;
    void set_j(int x)
    {
        j = x;
    }
    int get_ij()
    {
        return i + j;
    }
protected:
    int j;
};

int main()
{
    DERIVED obj;	// 声明一个派生类的对象

    obj.set_i(5);	// set_i()已从私有的转为public
    obj.set_j(7);	// set_j()本来就是公有的
    cout << obj.get_ij() << "\n";	// get_ij()本来就是公有的

    return 0;
}
