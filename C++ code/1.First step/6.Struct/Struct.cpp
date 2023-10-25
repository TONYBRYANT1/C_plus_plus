#include<bits/stdc++.h>
using namespace std;

// struct Student
// {
//     string name;
//     int age;
//     int score;
// }s3;

// struct Teacher
// {
//     string name;
//     int age;
//     int id;
//     struct Student stu;
// };

// void Print_Student1(struct Student s)
// {
//     cout << "姓名:" << s.name << "  年龄:" << s.age << "  分数:" << s.score << endl;
// }

// void Print_Student2(struct Student * p)
// {
//     cout << "姓名:" << p->name << "  年龄:" << p->age << "  分数:" << p->score << endl;
// }


//结构体案例1
// struct Student
// {
//     string sName;
//     int score;
// };

// struct Teacher
// {
//     string tName;
//     struct Student sArray[5];
// };

//输入师生信息
// void AllocateSpace(struct Teacher *tArray,int len)
// {
//     string nameSeed = "ABCDE";
//     for(int i=0;i<len;i++)
//     {
//         //老师名字
//         tArray[i].tName="Teacher_";
//         tArray[i].tName+=nameSeed[i];
//         //老师学生名字
//         for(int j=0;j<5;j++)
//         {
//             //老师学生名字
//             tArray[i].sArray[j].sName="Student_";
//             tArray[i].sArray[j].sName+=nameSeed[j];
//             //老师学生分数      
//             int score=rand()%61+40;
//             tArray[i].sArray[j].score=score;
//         }

//     }
// }


//案例2
// struct RoleInfo
// {
//     string name;
//     int age;
//     string sex;
// };

// //按角色年龄排序
// void BubbleSort_RoleInfo( struct RoleInfo *rArray,int len)
// {
//     for(int i=0;i<len-1;i++)
//     {
//         for(int j=0;j<len-1-i;j++)
//         {
//             if(rArray[j].age>rArray[j+1].age)
//             {
//                 struct RoleInfo temp = rArray[j];
//                 rArray[j]=rArray[j+1];
//                 rArray[j+1]=temp;
//             }
//         }
//     }
// }

// //打印角色数据
// void PrintRoleInfo(struct RoleInfo *rArray , int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         cout << "角色名称:" << rArray[i].name << "  角色年龄:" << rArray[i].age << "  角色性别:" << rArray[i].sex << endl;
//     }
//     cout << endl;

// }
//打印师生信息
// void PrintInfo(struct Teacher * tArray,int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         cout << "老师姓名:" << tArray[i].tName << endl;
//         for(int j=0;j<5;j++)
//         {
//             cout << "\t学生姓名:" << tArray[i].sArray[j].sName << " 学生分数:" << tArray[i].sArray[j].score << endl;
//         }
//     }
// }
int main()
{
//结构体基本概念:
//创建属于自己的数据类型

//1.创建学生数据类型:包括(姓名,年龄,分数)
    // //1.
    // struct Student s1;//创造结构体变量时struct可以省略
    // s1.name="张三";
    // s1.age=10;
    // s1.score=100;
    // cout << "姓名:" << s1.name << "  年龄:" << s1.age << "  分数:" << s1.score << endl;
    // //2.
    // struct Student s2={
    //     "李四",
    //     19,
    //     100
    // };
    // cout << "姓名:" << s2.name << "  年龄:" << s2.age << "  分数:" << s2.score << endl;
    // //3.创建结构体时创建结构体变量
    // s3.name="王五";
    // s3.age=18;
    // s3.score=100;
    // cout << "姓名:" << s3.name << "  年龄:" << s3.age << "  分数:" << s3.score << endl;
   
   
//2.结构体数组
    // struct Student stuArray[3]=
    // {
    //     {"张三",18,100},
    //     {"李四",19,100},
    //     {"王五",20,90}
    // };
    // for(int i=0;i<3;i++)
    // {
    //     cout << "姓名:" << stuArray[i].name << "  年龄:" << stuArray[i].age << "  分数:" << stuArray[i].score << endl;
    // }
    // stuArray[2].name="赵六";
    // stuArray[2].age=98;
    // stuArray[2].score=98;
    // cout << endl;
    // for(int i=0;i<3;i++)
    // {
    //     cout << "姓名:" << stuArray[i].name << "  年龄:" << stuArray[i].age << "  分数:" << stuArray[i].score << endl;
    // }


//3.结构体指针
    // struct Student s1 = {"张三",12,100};
    // struct Student *p = &s1;
    // cout << "姓名:" << p->name << "  年龄:" << p->age << "  分数:" << p->score << endl;
    // cout << endl;
    // cout << "姓名:" << (*p).name << "  年龄:" << (*p).age << "  分数:" << (*p).score << endl;
   
   
//4.结构体嵌套结构体
//创建老师
    // struct Teacher t;
    // t.name="老王";
    // t.age=50;
    // t.id=20040710;
    // t.stu={
    //     "张三",
    //     19,
    //     100
    // };
    // cout << "老师名字:" << t.name << "  老师年龄:" << t.age << "  老师id:" << t.id << endl;
    // cout << "老师学生姓名:" << t.stu.name << "  老师学生年龄:" << t.stu.age << "  老师学生分数:" << t.stu.score << endl;
   
   
//5.结构体做函数参数
    // struct Student s=
    // {
    //     "张三",
    //     38,
    //     100
    // };
    // cout << "姓名:" << s.name << "  年龄:" << s.age << "  分数:" << s.score << endl;
    // //1.值传递
    // Print_Student1(s);
    // //2.址传递
    // Print_Student2(&s);
   
   
//6.结构体中const的使用(防止误操作)
//void Print_Student(const struct Student *s)
    //1.址传递可以节省大部分的空间
    //2.址传递为了避免更改数据用const

   
//7.结构体案例
    //案例1(输入并打印师生信息)
    // srand((unsigned int)time(NULL));//随机数种子(生成随机分数)
    // struct Teacher tArray[3];
    // int len =sizeof(tArray)/sizeof(tArray[0]);
    // AllocateSpace(tArray,len);
    // PrintInfo(tArray,len);
    //案例2(将角色按年龄重新排列)
    // struct RoleInfo rArray[5]={
    //     {"刘备",23,"男"},
    //     {"关羽",22,"男"},
    //     {"张飞",20,"男"},
    //     {"赵云",21,"男"},
    //     {"貂蝉",19,"女"}
    // };
    // int len = sizeof(rArray)/sizeof(rArray[0]);
    // cout << "排序前:" << endl;
    // PrintRoleInfo(rArray,len);
    // BubbleSort_RoleInfo(rArray,len);
    // cout << "排序后:" << endl;
    // PrintRoleInfo(rArray,len);


    //system("pause");
    return 0;
}