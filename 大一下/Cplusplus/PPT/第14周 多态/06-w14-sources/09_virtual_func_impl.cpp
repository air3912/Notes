// virtual function implement
// 仅用于展示原理，不代表具体实现 
#include <iostream>
#include <typeinfo>
using namespace std;
//多态类型基类 
class CA {
private:
    short s_a;
public:
    int i_a;
    double d_a;
    CA():s_a(1),i_a(2),d_a(3) {cout << "CA created" << endl;};
    virtual void vf0() {cout << "I'm virtual, data i_a is " << i_a << " !\n";};
    virtual void vf1(int k) {cout << "I'm the second virtual " << k << " !\n";};
};
//多态类型派生类 
class CB: public CA {
public:
	CB():i_b(100) {cout << "CB created" << endl;};
private:
	int i_b;
	void vf1(int k) {cout << "I'm the second override " << k << " !\n";};
	virtual void vf2() {cout << "I'm new virtual VF2, i_b is " << i_b << " !\n";};
};

//函数指针，任意参数 
typedef void (*Norm_Function_P)(...);
//C语言视角多态类布局 
struct SA {
    void **vfp; //虚函数数组 
    //...
} *psa;

int main() {
	//定义函数数组 fp 
	Norm_Function_P *fp;
	//用 class CA虚函数表调用虚函数  
    CA ca;
    psa = (SA*)&ca;
	fp = (Norm_Function_P *) (psa->vfp);
    fp[0](psa);  // === ca.vf0() 
    fp[1](psa,10);  // === ca.vf1(10) 
    
    //用 class CB虚函数表调用虚函数
    CA &&cb=CB();
    psa = (SA*)&cb;
    fp = (Norm_Function_P *) (psa->vfp);
    fp[0](psa);
    fp[1](psa,10);
	fp[2](psa);  
	//获取动态类型 *cb 的类型信息 
	type_info *t = (type_info *)(fp[-1]);
	cout << t->name() << "|" << typeid(CB).name() << endl;
    return 0;
}
