- ispunct()

- oct是八进制，hex是十六进制，一块用的还有showbase and uppercase

- s.copy(char *dest,size_t len,size_t pos=0);//用来把string类型复制到dest字符数组里，结尾需要手动加0，所以一般配合着返回值（length：成功复制过去多少个字符）使用。

- int count=__builtin_popcount(7)：会返回二进制表示中1的个数（这里是3）


```cpp
cin >> n;
cin.ignore(); // 吃掉残留在缓冲区的 '\n'
getline(cin, s); // 这样就能正常读取下一行啦！
```