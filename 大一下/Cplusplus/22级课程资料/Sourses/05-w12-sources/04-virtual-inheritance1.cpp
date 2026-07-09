// 菱形继承，复制继承与命名冲突 
class Base {public:  int i;};
class Base1: public Base {
public:	int j;
};
class Base2: public Base {
public:	int k;
};
class Derived: public Base, public Base1, public Base2 {
public:	int sum;
};
int main() {	
   Derived obj;    // 声明一个派生类对象?
   obj.i = 3;	     // 正确：从Base继承的i在Derived中只有一份
   obj.j = 5;	     // 正确：使用从Base1继承的j
   obj.k = 7;	     // 正确：使用从Base2继承的k
   return 0;
}                                                                                                 
  
// 处理 14 行 error: request for member 'i' is ambiguous
// obj.i 改为 obj.Base1::i 
// 添加 virtual 
