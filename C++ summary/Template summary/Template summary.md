# 模版总结

## 1.运行速度：scanf / cin / printf / cout

## 2.上下取整：

### 1.函数类:

#### `ceil(天花板)函数`

~~~asp
功能：把一个小数向上取整
      即就是如果数是2.2 ，那向上取整的结果就为3.000000
原型：double ceil(doube x);
    参数解释：
        x:是需要计算的数
返回值：
    成功：返回一个double类型的数，此数默认有6位小数
    无失败的返回值
头文件：#include<math.h>
~~~

#### `floor(地板)函数`

~~~asp
功能：把一个小数向下取整
      即就是如果数是2.2 ，那向下取整的结果就为2.000000
原型：double floor(doube x);
    参数解释：
        x:是需要计算的数
返回值：
    成功：返回一个double类型的数，此数默认有6位小数
    无失败的返回值
头文件：#include<math.h>
~~~

#### `round(周围)函数`

~~~sap
功能：把一个小数四舍五入
      即就是如果数是2.2 ，那四舍五入的结果就为2
           如果数是2.5,那结果就是3
原型：double round(doube x);
    参数解释：
        x:是需要计算的数
头文件：#include<math.h>
~~~

### 2.惯操作：(int a - 1) / 2 + 1

## 3.输出格式的控制

### 1.C：printf() + %开头的格式控制符号

### 2. [C++：cout + 流操作算子(格式控制符) / 成员函数](https://blog.csdn.net/m0_61973119/article/details/129986460?ops_request_misc=&request_id=&biz_id=102&utm_term=cout%E8%BE%93%E5%87%BA%E6%B5%AE%E7%82%B9%E6%95%B0%E9%BB%98%E8%AE%A4&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-1-129986460.142^v94^insert_down28v1&spm=1018.2226.3001.4187)

#### 1.使用流操作算子

```
注意：“流操纵算子”一栏中的星号*不是算子的一部分，星号表示在没有使用任何算子的情况下，就等效于使用了该算子。例如，在默认情况下，整数是用十进制形式输出的，等效于使用了 dec 算子
```

<img src="Template summary.assets/流操作算子(常用)-16956500990381.png" style="zoom: 200%;" />

![](Template summary.assets/流操作算子(不常用)-16956501051862.png)

