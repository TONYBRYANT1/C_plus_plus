#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    //if
    // int score = 0;
    // cout << "请输入一个分数 : " << endl;
    // cin >> score;
    // cout << "分数为 : " << score << endl;
    // if(score > 600)
    // {
    //     cout << "211" << endl;
    // }
    // else if(score > 500 && score <=600)
    // {
    //     cout << "上不了211" << endl;
    // }
    // else if(400 < score < 500)
    // {
    //     cout << "一/二本" << endl;
    // }
    // else 
    // {
    //     cout << "再接再厉" << endl;
    // }


    //三个数比大小
    // int a =0;
    // int b =0;
    // int c =0;
    // cin >> a;
    // cin >> b;
    // cin >> c;
    // if(a>c)
    // {
    //     if(a>b)
    //     {
    //         cout << "a最大" << endl;
    //     }
    //     else
    //     {
    //         cout << "b最大"  << endl;
    //     }
    // }
    // else
    // {
    //     if(c>b)
    //     {
    //         cout << "c最大" << endl;
    //     }
    //     else
    //     {
    //         cout << "b最大" << endl;
    //     }
    // }


    //三目运算符: a > b ? a : b
    // int a=10;
    // int b=20;
    // int c=30;
    // c=(a>b?a:b);
    // cout << c <<endl;
    // a>b?a:b=100;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl; 


    //switch语句
    //switch缺点:只能判断整形或字符型，而不是一个区间
    //      优点:结构清晰，执行效率高
    //电影打分：
    //10~9:经典，8~7：一般 1~6:烂片
    // cout << "请给电影进行打分" << endl;
    // int score = 0;
    // cin >> score;
    // cout << "您打的分数为:" << score << "分" << endl; 
    // switch(score)
    // {
    //     case 10:
    //     case 9:
    //     {
    //         cout << "经典" << endl;
    //         break;
    //     }
    //     case 8:
    //     case 7:
    //     {
    //         cout << "一般" << endl;
    //         break;
    //     }  
    //     case 6:
    //     case 5:
    //     case 4:
    //     case 3:
    //     case 2:
    //     case 1:
    //     {
    //          cout << "烂片" << endl; 
    //         break; 
    //     }   
    //     default:
    //     {
    //         cout << "烂片" << endl;
    //         break;
    //     }
    // }


    //while循环语句
    // int num = 0;
    // while(num < 10)
    // {
    //     cout << "num = " << num << endl;
    //     num++;
    // }


    //猜数字
    //1.生成随机数
    //添加随机数种子,作用利用当前系统时间生成随机数，防止每次随机数都一样
    //头函数 #include<ctime>
    // srand((unsigned int)time(NULL));
    // int num =rand() % 100 + 1 ;    //(rand() % 100 --- 随机生成0到99的数字)
    // while(1)
    // { 
    //     //2.玩家猜
    //     int value = 0;
    //     cout << "请输入您猜测的数字:";
    //     cin >> value;
    //     cout << "您猜测的数字为:" << value <<endl;
    //     //3.判断大小
    //     if(value > num)
    //     {
    //         cout << "猜大了" << endl;
    //     }
    //     else if(value < num)
    //     {
    //         cout << "猜小了" << endl;
    //     }
    //     else
    //     {
    //         cout << "猜对了" << endl;
    //         break;
    //     }
    // }
 

    //do...while
    // int num = 0;
    // do 
    // {
    //     cout << num << endl;
    //     num++;
    // }while(num < 10);


    // 水仙花数
    // int num = 100;
    // do 
    // {
    //     int a = num%10;
    //     int b = (num/10)%10;
    //     int c = (num/100);
    //     if( (a*a*a+b*b*b+c*c*c) == num)
    //     {
    //         cout << num << endl;
    //     }
    //     num++;
    // } while(num < 1000);


    //for循环
    // int i = 0;
    // for(i=0;i<10;i++)
    // {
    //     cout << i << endl;
    // }


    //敲桌子
    // int i=0;
    // for(i=1;i<=100;i++)
    // {
    //     if( (i%7==0) || (i%10==7) || (i/10==7) )
    //     cout << "敲桌子" << endl;
    //     else
    //     {
    //         cout << i << endl;
    //     }
    // }


    //嵌套循环：外层循环一次,内层循环一周
    //星图
    // int i=0;
    // int j=0;
    // for(i=0;i<10;i++)
    // {
    //    for(j=0;j<10;j++)
    //    {
    //     cout << "* ";
    //    }
    //    cout << endl;
    // }


    //乘法口诀表 9*9 
    // int i=0;
    // int j=0;
    // for(i=1;i<=9;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         cout << j << "*" << i << "=" << i*j << " " ;   
    //     }
    //     cout << endl;
    // }


    //goto
    // cout << "1.xxxx" <<endl;

    // goto FLAG; 

    // cout << "2.xxxx" <<endl;
    // cout << "3.xxxx" <<endl;
    // cout << "4.xxxx" <<endl;

    // FLAG:

    // cout << "5.xxxx" <<endl;





    //system("pause");
    return 0;
}