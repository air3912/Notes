### 总结
一般情况下，首选方案就是to_string/stoi/stod就可以满足百分之90的使用场景，如果太复杂的话在考虑这个sstream与sprintf和sscanf


### 通解
- stringstream
```cpp
stringstream ss;
ss<<age//指向ss，向ss里写入
string str=ss.str();

string str1="11.23"
double price;
stringstream ss1(str1);
ss1>>prince;
```


- sscanf/sprintf
在<cstdio>里

我们用把数字写到字符串里，实现int->str
```cpp
char buffer[100]//c里面的东西，不支持传入string里
int num1,num2;
sprintf(buffer,"anything you want to convert: %d, and %d",num1,num2);
// and if you want to get string type
string str=buffer;
```
我们用sscanf把字符串里的str数字提取回int类型变量
```cpp
string str("I like 1234 and 5678");
char buffer[100];int num1,num2;
strcpy(buffer,str.c_str());
sscanf(buffer,"I like %d and %d" , &num1,&num2);
//and then num1 and num2 are successfully converted.
```
然后我在回忆一下%d的那些基础的东西
%5d：长度为5
%-05d：长度为5，左对齐，不足补0





### str->int
- atoi/atol
在<cstdlib>中。没有错误检查机制，如果遇到无法转换的字符会直接返回0.
- stoi/stol


### int->str
- to_string