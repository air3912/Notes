### 初始化

- vector<int> vec{1,2,3,4,5};
- vector<int> vec(5)：初始化5个0
- vector<int> vec(2,4)：初始化一个长度为2，内容为4的数组
- int arr[]=(1,2,3);vector<int> vec(arr,arr+3);这个就是把arr里的内容hual到vec里

### 元素访问

- vec[]
- vec.at(0)    //我记得这个是会检查越界的调试好用。
- vec.front()：第一个元素的引用
- vec.back()：最后一个元素的引用

### 容量与大小

- vec.empty():
- vec.size()：元素数量
- vec.capacity()：数组容量
- vec.reserve(n)：再多申请元素内存

### 修改

- vec.push_back(val)
- vec.pop_back()：移除最后一个元素
- vec.insert(pos,val)：将val放在pos位置，pos以及以后者全部后移一位
- vec.erase(first,last)：清除这两中间的元素
- vec.swap(other_vec)：高效的交换内容

### 迭代器

- vec.begin()
- vec.end()
- vec.rbegin()
- vec.rend()

### 总述

其实吧就相当于是自动挡的int* arr = new int[10];这样子

---
### 说到这了，那不如来个比较

- 二维数组
```cpp
int row =3,col=4;
int **arr=new int*[row];
for(int i=0;i<row;i++){
    arr[i]=new int[col];
}

for(int i=0;i<row;i++){
    delete[] arr[i];
}
delete[] arr;

vector<veotor<int>>=matrix(row,vector<int>(col,0));
//当然我们的vector其实十分自由，直接vector<vector<int>>matrix就可以了，后续有不足什么的都是可以直接加上去的

```