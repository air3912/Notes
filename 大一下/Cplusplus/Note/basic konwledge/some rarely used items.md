### summary
会有一些PPT里的冷门知识点说是



---
<details>
<summary><b>讲讲我们头文件与源文件之间的关系</b></summary>

- 首先头文件，include"head.h"实际上就是文本替换，所以我们没有#pragma once的话可能会因为多个文件相互包含的时候redefinition

- global variiable：不能直接写到头文件里，头文件里一般写extern int a;否则redefintion报错，每个文件都有define。


- 程序运行时的四个阶段：
1. 预处理：处理define宏，进行#include文本替换
2. compilation：编译就是检查错误然后把代码翻译成汇编语言
3. assembly：汇编就是把汇编语言转化成二进制object file（目标文件.o/.obj之类的）
4. linking：链接，把所有的.o文件打包到一起，

</details>

---

<details>
    <summary><b>讲讲闰年判定程序</b></summary>
 ```c
case 2:  //那啥，其实是否为闰年就这两条逻辑，别再写一大串了（
      if ((yr % 4 == 0 && yr % 100 != 0) ||yr % 400 == 0)
          return 29;
      else
          return 28;
```

</details>

---

<details>
    <summary><b>讲讲引用</b></summary>
- 引用不是一个对象，不存在引用的数组，不存在引用的地址，不存在引用的引用，引用不能为空，声明时就要定义
- 左值引用：最常见的引用方式
- 右值引用：

</details>


---

<details>
    <summary><b>const那些</b></summary>
- 在类的成员函数末尾加上声明：这个函数不会修改任何成员变量
- constexpr：表示这个值只有在编译时才能算出来
- static：函数內部的静态变量/文件內部的静态变量，作用域是这个文件內部，即可以在a.cpp和b.cpp里同时static int variable;彼此相互独立

</details>

