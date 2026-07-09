# C++ Template Examples

这些文件是互相独立的课堂示例，每个 `.cpp` 文件都有自己的 `main()`。

## 常用命令

查看可运行的示例：

```sh
make
```

编译全部示例：

```sh
make all
```

运行某一个示例：

```sh
make 03_class_template
```

也可以直接写完整文件名：

```sh
make 03_class_template.cpp
```

或者用变量形式：

```sh
make run FILE=03_class_template.cpp
```

或者用不带 `.cpp` 的名字：

```sh
make run EXAMPLE=03_class_template
```

注意：`FILE=` 后面不能有空格。

清理编译结果：

```sh
make clean
```

默认使用 `c++ -std=c++11 -Wall -Wextra`，这样可以兼容示例中较旧的 `throw(...)` 写法。
