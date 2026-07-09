核心是维护一个结构体，然后重载结构体里的>or<，告诉priority_queue<class>top这个位置应该放什么东西。

```cpp
struct Student{
    string name;
    int score;
    int age;

    bool operator<(const Student& other){
        return  other.score > this->score;//最大堆
    }
}
//PS：我们只重载小于号，但是返回other>this/other<this来判定最大/最小堆。

int main(){
    priority_queue<Student> pq;
    pq.push({"111",88,12});
    pq.push({"222",99,13});
    cout<<pq.top().name<<": "<<pq.top().score<<endl;
    return 0;
}


```