# c洛谷题单总结

## 1.顺序结构(sequential structure)

### 1.[P5705 【深基2.例7】数字反转](https://www.luogu.com.cn/problem/P5705)

要点：

​	1.将带有符号 ' . ' 的数字以字符串的形式储存，可以方便的进行正、负显示

代码：

~~~c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int len = a.size();//计算空格前的字符数量
    for(int i=len-1;i>=0;i--)
    {
        cout << a[i];
    }
    //system("pause");
    return 0;
}
~~~

## 2.分支结构(branch structure)

## 3.循环结构(loop structure)

## 4.数组

## 5.字符串

### 1.[P1957 口算练习题](https://www.luogu.com.cn/problem/P1957)

要点 : 

​	1.当不知道输入是数字还是字符串时 ，可以用 char[ ] 来接收

函数使用 :

#### 一 ：itoa( ) 和 atoi( ) 函数

#### 1.	itoa( ) 函数

itoa( )函数是C语言中的整型数字转换成字符串的一个函数

（1）【头文件】#include <stdlib.h>

（2）【函数原型】char *itoa(int value, char *string, int radix);

（3）【参数说明】

- ​	**value**：要转换的数据。
- ​    **string**：目标字符串的地址
- ​    **radix**：转换后的进制数，可以是10进制、16进制等，范围必须在 2-36。 

（4）   【用法示例】

```c++
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int num = 100;
	char str[25];
	itoa(num, str, 10);
	cout << str; //输出100 
	return 0;
}
```

（5）【注意】

​			itoa并不是一个标准的C函数，它是Windows特有的，如果要写跨平台的程序，需要用sprintf。C标准库中有sprintf，功能比这个更强，用法跟printf类似



#### 2.	atoi( ) 函数

atoi( )是C语言中的字符串转换成整型数的一个函数

（1）【头文件】#include <cstdlib>

（2）【函数原型】int atoi (const char * str);

（3）【函数说明】atoi() 函数会扫描参数 str 字符串，跳过前面的空白字符（例如空格，tab缩进等），直到遇上数字或正负符号才开始做转换，而再遇到 非数字 或 字符串结束时(’\0’) 才结束转换，并将结果返回。函数返回转换后的整型数；如果 str 不能转换成 int 或者 str 为空字符串，那么将返回 0。
（4）【用法示例】

```c++
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	const char *s = "134";
	int num = atoi(s);
	cout << num; //输出：134 
	return 0;
}
```



#### 3.	用 atoi( ) 和 itoa( ) 函数进行进制转换

十进制转化为二进制 :

思路 :  itoa( )函数可以将进行进制转换 (需要 char[ ] 作为中转站)

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    int a = 5;
    a = atoi(itoa(a , arr , 2));
    cout << a << endl;
    return 0;
}
```



#### 二：sscanf( ) 和 sprintf( ) 函数

#### 1.	引言 : scanf( ) 和 sprintf( ) 函数

scanf( ) 和 printf( ) 函数	`(借助函数进行类比)`

```c++
//普通的scanf( ) 和 printf( ) 函数
scanf("%d" , &n);
printf("%d" , n);
//相当于 :
sscanf(screen , "%d" , &n); //仅仅只是演示,这样写会有问题
sprintf(screen , "%d" , n); //仅仅只是演示,这样写会有问题
```

（1）	`scanf("%d" , &n);` 可以看成 `sscanf(screen , "%d" , &n);`

scanf 的输入其实是把 screen 的内容以"%d"的格式传输到 n 中(即从左至右)

（2）	`printf("%d" , n);` 可以看成 `sprintf(screen , "%d" , n);`

printf 的输出则是把 n 以 “%d" 的格式传输到 screen 上(即从右至左)



#### 2.	sscanf( ) 函数	

将 char[ ] 中的数字输入到 int 类型的变量中

<[C 库函数 – sscanf() | 菜鸟教程 (runoob.com)](https://www.runoob.com/cprogramming/c-function-sscanf.html)>

sscanf( )是 C 库函数 : 从字符串读取格式化输入。

（1）【头文件】#include <stdio.h>

（2）【函数原型】int sscanf(const char *str, const char *format, ...)

（3）【参数说明】

- **str** ：这是 C 字符串，是函数检索数据的源。
- **format** ：这是 C 字符串，包含了以下各项中的一个或多个：*空格字符、非空格字符* 和 *format 说明符*。
  format 说明符形式为 **[=%[\*][width][modifiers]type=]**

（4）【用法示例】

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10] = "1234";
    int n=0;
    sscanf(str , "%d" , &n);
    cout << n << endl; //输出1234
    return 0;
}
```



#### 	3.	sprintf( ) 函数	

将 int 类型的变量打印到 char[ ] 中

<[C 库函数 – sprintf() | 菜鸟教程 (runoob.com)](https://www.runoob.com/cprogramming/c-function-sprintf.html)>

sprintf( )是 C 库函数 : 发送格式化输出到 **str** 所指向的字符串。

（1）【头文件】#include <stdio.h>

（2）【函数原型】int sprintf(char *str, const char *format, ...)

（3）【参数说明】

- **str** ：这是指向一个字符数组的指针，该数组存储了 C 字符串。
- **format** ：这是字符串，包含了要被写入到字符串 str 的文本。它可以包含嵌入的 format 标签，format 标签可被随后的附加参数中指定的值替换，并按需求进行格式化。format 标签属性是 **%[flags][width][.precision][length]specifier**

（4）【用法示例】

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    char str[10];
    sprintf(str , "%d" , a);
    cout << str << endl; //输出10
    return 0;
}
```



#### 三：is.. 函数对字符串进行分类

#### 1.	isalpha( ) 函数 	--- alphabet(字母表)

itoa( )函数用来检测一个字符是否是字母，包括大写字母和小写字母

（1）【头文件】#include<ctype.h> 

（2）【函数原型】int isalpha(int c);

（3）【参数说明】

- ​	**c** :   将第一个字符转化为 int 型数字
  - 1.字符 a => c = int(a)
  - 2.字符数组 char[ ] = int(char[ ])

- **A~Z** : **65~90**        **a~z** : **97~122**

（4）   【用法示例】

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1=97;
    char arr2[10]="abc";
    char str = 'A';
    int ret = 0;
    ret = isalpha(arr1);
    cout << ret << endl; //2
    ret = isalpha(arr2[0]);
    cout << ret << endl; //2
    ret = isalpha(str);
    cout << ret << endl; //1
    return 0;
}
```



#### 2.	isalnum( ) 函数 	--- al(alphabet)	--- num(number)

isalnum( )函数用来检查所传的字符是否是字母和数字。

（1）【头文件】#include<ctype.h> 

（2）【函数原型】int isalnum(int c);

（3）【参数说明】

- ​	**c** :   将第一个字符转化为 int 型数字
  - 1.字符 a => c = int(a)
  - 2.字符数组 char[ ] = int(char[ ])
- ​    **0~9** : **48~57**        **A~Z** : **65~90**        **a~z** : **97~122**

（4）   【用法示例】

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    #include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1=48;
    char arr2[10]="111";
    char str = 'a';
    int ret = 0;
    ret = isalnum(arr1);
    cout << ret << endl; //4
    ret = isalnum(arr2[0]);
    cout << ret << endl; //4
    ret = isalnum(str);
    cout << ret << endl; //2
    return 0;
}
```



#### 3.	isdigit( )函数	--- digit(0~9的数字)

itoa( )函数用来检查所传的字符是否是十进制数字字符。

（1）【头文件】#include<ctype.h> 

（2）【函数原型】int isdigit(int c);

（3）【参数说明】

- ​	**c** :   将第一个字符转化为 int 型数字
  - 1.字符 a => c = int(a)
  - 2.字符数组 char[ ] = int(char[ ])
- ​    **0~9** : **48~57**

（4）   【用法示例】

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1 = '0';
    cout << isdigit(str1) << endl; //1
    char str2 = '1';
    cout << isdigit(str2) << endl; //1
    char str3 = 'a';
    cout << isdigit(str3) << endl; //0
    return 0;
}
```



#### 4.1	islower( ) 函数	

islower( )函数用来检查所传的字符是否是小写字母。

（1）【头文件】#include<ctype.h> 

（2）【函数原型】int islower(int c);

（3）【参数说明】

- ​	**c** :   将第一个字符转化为 int 型数字
  - 1.字符 a => c = int(a)
  - 2.字符数组 char[ ] = int(char[ ])
- ​    **a~z** : **97~122**

（4）   【用法示例】

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1 = 'A';
    cout << islower(str1) << endl; //0
    char str2 = 'a';
    cout << islower(str2) << endl; //2
    char str3 = '0';
    cout << islower(str3) << endl; //0
    return 0;
}
```



#### 4.2	tolower( ) 函数

tolower( ) 函数用来把大写字母转换为小写字母。

（1）【头文件】#include<ctype.h> 

（2）【函数原型】int tolower(int c);

（3）【参数说明】

- ​	**c** -- 这是要被转换为小写的字母。
  - 1.字符 a => c = int(a)
  - 2.字符数组 char[ ] = int(char[ ])
- ​    **a~z** : **97~122**

（4）   【用法示例】

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "ABCDEFG";
    for(int i=0 ; i<str.length() ; i++)
    {
        str[i] = char(tolower(str[i]));
    }
    cout << str << endl; //abcdefg
    return 0;
}
```



#### 5.1	isupper( ) 函数	

isupper( ) 函数用来检查所传的字符是否是大写字母。

（1）【头文件】#include<ctype.h> 

（2）【函数原型】int isupper(int c);

（3）【参数说明】

- ​	**c** :   将第一个字符转化为 int 型数字
  - 1.字符 a => c = int(a)
  - 2.字符数组 char[ ] = int(char[ ])
- ​    **A~Z** : **65~90** 

（4）   【用法示例】

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1=65;
    char arr2[10]="affbB";
    char str = '1';
    int ret = 0;
    ret = isupper(arr1);
    cout << ret << endl; //1
    ret = isupper(arr2[0]);
    cout << ret << endl; //0
    ret = isupper(str);
    cout << ret << endl; //0
    return 0;
}
```



#### 5.2	toupper( ) 函数

toupper( ) 函数用来把小写字母转换为大写字母。

（1）【头文件】#include<ctype.h> 

（2）【函数原型】int toupper(int c);

（3）【参数说明】

- ​	**c** -- 这是要被转换为小写的字母。
  - 1.字符 a => c = int(a)
  - 2.字符数组 char[ ] = int(char[ ])
- ​    **a~z** : **97~122**

（4）   【用法示例】

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str = "abcdefg";
    for(int i=0 ; i<str.length() ; i++)
    {
        str[i] = char(toupper(str[i]));
    }
    cout << str << endl; //ABCDEFG
	return 0;
}
```



### [P5015 [NOIP2018 普及组] 标题统计](https://www.luogu.com.cn/problem/P5015)

要点 : 

​	1.当不知道输入是数字还是字符串时 ，可以用 char[ ] 来接收

函数使用 :

#### 一：字符串的输入和输出

#### 1.	scanf( ) 函数

缺点 : 

1.不能读取 空格、制表符，因为被当做 "分隔符" 处理了！

2.可能导致越界



#### 2.	gets( ) 函数

特点 : 

1.能够读取 空格、制表符，但是不读取回车符

缺点 : 

1.也可能导致越界访问



#### 3.	fgets( ) 函数

fgets(arr , sizeof(arr) , stdin) <==> gets(arr)



#### 4.	cin >> istream

缺点 : 

1.不能读取空格



#### 5.	getline( ) 函数

1.接收一个字符串，可以接收空格并输出，不过要包#include<string>

2.这也就弥补了之前cin.getline()和cin.get（）的不能读取string的一个小的弊端

3.写法：getline(cin,字符串数组名);

4.如果getline( ) ，前有 cin >> ，因为缓冲区中有回车键 ' \r ' ，所以要加上getchar( )  

```c++
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	cout << s;
	return 0;
}
```





### [P5734 【深基6.例6】文字处理软件](https://www.luogu.com.cn/problem/P5734)

要点 : 

​	string 的使用

函数使用 :

#### 1. substr( )  函数 (string截取函数)

1. 两个参数

   str.substr(size_t pos , size_t len);

2. 一个参数(从 pos 到最后)

   str.substr(pos);

   ```c++
   #include<bits/stdc++.h>
   using namespace std;
   int main()
   {
       string str = "I Love You";
       int pos = str.find('e');
       str = str.substr(pos+2);
        cout << str << endl;
   
       str = "I Love You";
       str = str.substr(2 , 4);
       cout << str << endl;
       return 0;
   }
   ```



#### 2.insert( ) 函数 (string插入函数)

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "I You";
    string str2("Love ");
    str = str.insert(2 , str2);
    cout << str << endl;
    str = "I You";
    str2 = "Love You";
    str = str.insert(2 , str2 , 0 , 5);
    cout << str << endl;
    return 0;
}
```



#### 3.string的函数总结

1. 赋值：assign( )
2. 比较：1.直接比较	2.compare( )
3. 连接：1.     ' + '        2.append( )

4. 查找：1.find( )	2.rfind( )	3.find_first_of( )	4.find_first_not_of( )	5.find_last_of( )	6.find_last_not_of( )
5. 替换：replace( )	
6. 删除：erase( )
7. 截取：substr( )
8. 插入：insert( )



### [P1308 [NOIP2011 普及组] 统计单词数](https://www.luogu.com.cn/problem/P1308)

要点：

​			string的使用

函数：

#### 1.	tolower( ) 函数

（上述有）

#### 2.	toupper( ) 函数

（上述有）



[A-游游的正方形披萨_牛客周赛 Round 17 (nowcoder.com)](https://ac.nowcoder.com/acm/contest/68338/A)
