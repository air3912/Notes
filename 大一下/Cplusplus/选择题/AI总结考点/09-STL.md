# STL：选择与判断题

> 覆盖第16、17周。文件名沿用课件章节编号 09。单选题均只有一个正确答案。

## 一、单选题

1. 下列容器不支持随机访问的是：
   - A. `vector`
   - B. `deque`
   - C. `array`
   - D. `list`

> 答案：**D**。

2. `vector<int> v(10,1);` 表示：
   - A. 两个元素 10、1
   - B. 10 个值为 1 的元素
   - C. 容量为 10、大小为 1
   - D. 第 10 个元素赋值为 1

> 答案：**B**。

3. `vector<int> v{10,1};` 表示：
   - A. 两个元素 10、1
   - B. 10 个值为 1 的元素
   - C. 1 个值为 10 的元素
   - D. 编译错误

> 答案：**A**。

4. 对 `vector` 越界访问会主动检查并抛异常的是：
   - A. `operator[]`
   - B. `at()`
   - C. `front()`
   - D. `back()`

> 答案：**B**。

5. 对容器执行 `resize(n)` 的效果是：
   - A. 只改变预留容量，不改变元素数
   - B. 改变元素个数，必要时添加或删除元素
   - C. 清空容器
   - D. 只允许缩小

> 答案：**B**。

6. STL 中迭代器范围通常是：
   - A. `[begin,end]`
   - B. `(begin,end)`
   - C. `[begin,end)`
   - D. `(begin,end]`

> 答案：**C**。

7. `c.insert(pos,x)` 通常把 `x` 插入到：
   - A. `pos` 之后
   - B. `pos` 之前
   - C. 容器开头
   - D. 容器结尾

> 答案：**B**。

8. `c.erase(it)` 的常见返回值是：
   - A. 被删除元素的值
   - B. 被删除元素的前驱迭代器
   - C. 被删除元素的后继迭代器
   - D. 容器大小

> 答案：**C**。

9. 范围 `for (auto x : c)` 中修改 `x`：
   - A. 一定修改原容器元素
   - B. 通常只修改元素副本
   - C. 会清空容器
   - D. 只有 `list` 会修改原元素

> 答案：**B**。 解析：要修改原元素需使用 `auto&`。

10. `map[key]` 在 `key` 不存在时会：
    - A. 只返回 `end()`
    - B. 抛出异常
    - C. 插入该键及值初始化的映射值
    - D. 什么也不做

> 答案：**C**。

11. 普通 `map::insert` 遇到已有同键元素时通常：
    - A. 覆盖原映射值
    - B. 不插入，并通过返回值报告失败
    - C. 形成重复键
    - D. 删除旧元素

> 答案：**B**。

12. `multimap` 与 `map` 的重要区别是：
    - A. `multimap` 支持重复键且不支持下标
    - B. `multimap` 元素无键
    - C. `map` 支持重复键
    - D. `multimap` 只能存整数

> 答案：**A**。

13. `lower_bound(k)` 返回：
    - A. 第一个键 `> k` 的元素
    - B. 第一个键 `>= k` 的元素
    - C. 最后一个键 `< k` 的元素
    - D. 键恰好等于 `k` 的元素，否则报错

> 答案：**B**。 解析：`upper_bound` 才是第一个 `>k`。

14. `stack::pop()` 的返回值是：
    - A. 被删除的栈顶元素
    - B. 新的栈顶元素
    - C. `bool`
    - D. 无返回值

> 答案：**D**。 解析：先 `top()` 取值，再 `pop()`。

15. 默认情况下，`priority_queue<int>::top()` 通常返回：
    - A. 最小元素
    - B. 最大元素
    - C. 最早插入元素
    - D. 最晚插入元素

> 答案：**B**。

16. 下列容器不能直接作为 `std::sort` 的迭代器范围的是：
    - A. `vector`
    - B. `deque`
    - C. `array`
    - D. `list`

> 答案：**D**。 解析：`std::sort` 要求随机访问迭代器；`list` 使用成员 `sort()`。

17. `std::accumulate` 所在头文件是：
    - A. `<algorithm>`
    - B. `<numeric>`
    - C. `<iterator>`
    - D. `<functional>`

> 答案：**B**。

18. lambda 捕获 `[&x]` 表示：
    - A. 按值捕获 `x`
    - B. 按引用捕获 `x`
    - C. 不捕获 `x`
    - D. 把 `x` 转成指针

> 答案：**B**。

## 二、判断题

1. `list` 支持 `operator[]`。

> 答案：**错**。

2. `end()` 指向最后一个实际元素，因此可以解引用。

> 答案：**错**。 解析：`end()` 是尾后位置。

3. 遍历中执行 `erase(it)` 后，继续使用原 `it` 可能出错。

> 答案：**对**。

4. `set` 迭代器可以任意修改元素值。

> 答案：**错**。 解析：会破坏有序性。

5. 普通 `map` 中某个键的 `count` 只能为 0 或 1。

> 答案：**对**。

6. `stack::pop()` 会返回刚删除的元素。

> 答案：**错**。

7. `priority_queue` 默认底层容器通常是 `vector`。

> 答案：**对**。

8. `<bits/stdc++.h>` 是 ISO C++ 标准头文件。

> 答案：**错**。

## 三、课件勘误题

1. 课件表格中的 `priority_deque` 应为：
   - A. `priority_list`
   - B. `priority_vector`
   - C. `priority_queue`
   - D. `priority_stack`

> 答案：**C**。

2. `std::set<int> s; auto r=s.insert(3);` 中 `r` 的常见类型是：
   - A. `iterator`
   - B. `pair<iterator,bool>`
   - C. `bool`
   - D. `int`

> 答案：**B**。 解析：迭代器在 `.first`，是否插入成功在 `.second`。

3. `stack<char, vector<int>>` 的主要问题是：
   - A. `stack` 不能使用 `vector`
   - B. 适配器元素类型与底层容器元素类型不一致
   - C. `char` 不能入栈
   - D. `vector` 没有 `push_back`

> 答案：**B**。 解析：应改用 `vector<char>` 或默认底层容器。
