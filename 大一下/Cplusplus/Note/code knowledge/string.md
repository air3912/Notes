### 声明
- 我们string是创建对象，而非声明变量，故而我们这有很多属于string的成员函数
```c
void fun0(){
    string s1(4,'s');
    string s2(str);
}
```

### 增删改查
- insert
- erase
- replace
- substr
- clear

```c
void fun1(string s,int pos,int len,string str){
    s+='a';
    s.insert(pos,str);
    s.insert(pos,num,c);        //加num个char类型
    s.erase(pos,len);           //其实pos+len就足够用来表示一个str了
    s.replace(pos,len,str);
    s.substr(pos,len);   
    s.clear();
} 
```

### 搜索
- find

```c
void fun2(string s,string str){
    s.find(str);  //返回第一次出现的索引        //没找到的话s.find(str)=string::npos
    s.rfind(str);
    s.find(str,4)//从第五个位置开始查找          //重载的魅力
}//没找到会返回std::string::npos
```



### 提取字串
- substr
```cpp
void fun3(string s){
    s.substr(pos,len);
    s.substr(pos);//只有一个参数，一直截取到结尾
}

```

### 比较复制
- compare
- copy
- swap
```cpp
void fun4(string s){
    s.compare(str);//大于0的话表示s比较大

    char* str[1000];
    size_t s_len=s.copy(char_str,len,pos)//return len.有点神奇，pos头一次见在前面的
    char_str[s_len]=0;//总之可以把string的一部分赋值给char数组

    s.swap(str);//时间复杂度是O(1)，因为交换的是指针
}

```

### 数值转换
- stoi
- stod

```cpp
void fun5(string s){
    int n=stoi(s);
    double m=stod(s);
    string s=to_string(pi);
}
```



### 其他的乱七八糟的

- s.c_str();//返回c类型字符串数组