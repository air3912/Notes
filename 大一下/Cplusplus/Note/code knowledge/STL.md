### map
```cpp
#include <map>
using namespace std;
//内部存储默认是升序的，契合的algorithm有：


int main(){
    map<string,int> m={{"apple",1},{"banana",2},{"cherry",3}};
    for(auto it=m.begin();it!=m.end();it++){}//----正序遍历
    for(const auto& it=m.rbegin(),it!=m.rend(),it++){
        string key=it->first;
        int value=it->second;
    }//----倒叙遍历
}
```
- find: m.find("apple");----找到返回这个迭代器，否者返回m.end();
- count：m.count("banana");----map最多一个，则等于1代表有，等于0代表没有，find的下位替代（没法返回具体位置）
- erase：m.erase("apple");----如果键存在就删除并返回 1，如果不存在就什么都不做并返回 0。
- m[key]----只要写了这个东西，他就会自动创建这个建值对，默认值为0/
- m.size()/m.clear()/m.empty();


### set
```cpp
#include<set>
#include<string>
using namespace std;
//默认升序，元素唯一且不能更改，重复添加元素会默认无视掉


int main(){
    set<string> s={"apple","banana","cherry"};
}
```
- s.count("apple");
- s.find("banana");
- s.insert("hap");----会自己排序，所以他的位置是不需要在意的。
- s.erase("hap");





### list
```cpp
#include<list>
using namespace std;

int main(){
    list<int> l={1,2,3};
    auto it=l.begin();
    l.insert(it,100);//it这个位置插入100，原本的和后续的后移一位
    l.erase(it);
    advance(it,n);
    auto new_it=next(it,n);
    auto new_it=prev(it,n);
}

``` 
- push_back()/pop_back();
- push_front()/pop_front();
- l.sort()
- l.reverse()----直接把algorithm内化吸收了
- l.unique():去重
- l.remove(2);直接删了


### queue
```cpp
#include<queue>
using namespace std;
//queue元素可以同是访问头和结尾，但是push只有尾部，pop只有头部。
struct Student{
    string name;
    int age;

    bool operator<(const Student& other) cosnt{//！！！最大堆重载小于号！！！
        return other.age<this->age;//最小堆。
    }
}

int main(){
    queue<int> q;
    q.push("apple");
    q.push("banana");
    string tar=q.front();
    q.pop();

    priority_queue<Student> pq;//最大堆
    priority_queue<int,vector<int>,greater<int>> pq;//最小堆。




}

```
- q.push();
- q.front();
- q.back();
- q.pop();
- q.empty();


### deque
```cpp
#include<deque>
using namespace std;

int main(){
    deque<int> de;
}
```
- 基本和vector一样，这里就不多说了。


### stack
```cpp
#include<stack>
using namespace std;
//和普通的queue一样，不过是先进后出。

int main(){
    stack<int> s
}
```
- s.push(val);
- s.pop();
- s.top();
- s.empty()/s.size();


### array
```cpp
#include<array>
using namespace std;
//静态数组（int arr[10])在C++中的高等替换，传参时不会退化为一个指针酱。

array<int,5> arr={1,2,3,4,5};
array arr2={1,2,3,4};
```
- arr.fill(0);填充元素

### 还有一些乱七八糟的
- unordered_set查找平均时间复杂度是1

- deque双端队列最适合在头部和结尾进行插入删除操作。

容器适配器：
- stack；默认deque
- queue：默认deque
- priority_queue：默认vector

顺序容器：
- vector
- deque
- list
- array
- forward_list

关联容器：
- map
- set：元素不能通过迭代器修改，否则会破坏排序。

迭代器；
- 随机访问迭代器：vector/deque/array
- 双向迭代器：list/set/map
- 前向迭代器：forward_list
- 输入迭代器：从容器中读取数据
- 输出迭代器：可以向容器中写入数据

### 两队比较

  - vector：尾部插入/删除快，支持随机访问。
  - list：已知位置时插入/删除快，不支持随机访问。
  - deque：两端插入/删除快，支持随机访问。动态数组储存元素。

  - map/set 查找、插入是 O(log n)。
  - unordered_map 平均查找是 O(1)。
  - vector::push_back 是均摊 O(1)。
  - priority_queue::push/pop 是 O(log n)。

  1. vector 支持 push_front()。——错
  2. vector 尾部插入一定是 O(1)。——错，是均摊 O(1)。
  3. array内存使用最高效，没有任何额外内存开销。