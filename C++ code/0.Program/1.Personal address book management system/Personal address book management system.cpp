//通讯录管理系统
//需求:增、删、查、改、清、显、退

#include<iostream>
#include<string>
//#include"Function.cpp"
#define MAX 1000
using namespace std;

//结构体:个人
struct Person
{
    string m_Name;
    int m_Sex;
    int m_age;

    string m_Phone;
    string m_Addr;
};

//结构体:通讯录
struct Address_Books
{
    struct Person pArray[MAX];
    int m_Size;
};

//菜单
void ShowMenu()
{
    cout << "************************" << endl;
    cout << "***** 1.添加联系人 *****" << endl;
    cout << "***** 2.删除联系人 *****" << endl;
    cout << "***** 3.查找联系人 *****" << endl;
    cout << "***** 4.修改联系人 *****" << endl;
    cout << "***** 5.清除联系人 *****" << endl;
    cout << "***** 6.显示联系人 *****" << endl;
    cout << "***** 0.退出通讯录 *****" << endl;
    cout << "************************" << endl;
}

//增
void AddPerson(struct Address_Books* abs)
{
    //判断通讯录是否满了,如果满了就不再添加
    if (abs->m_Size == MAX)
    {
        cout << "通讯录已满,无法添加!" << endl;
        return;
    }
    else
    {
        //输入
        //1.名字
        cout << "请输入名字:";
        string name;
        cin >> name;
        abs->pArray[abs->m_Size].m_Name = name;
        //2.性别
        int sex;
        cout << "1 for boy" << endl;
        cout << "2 for girl" << endl;
        cout << "请输入性别:";
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->pArray[abs->m_Size].m_Sex = sex;
                break;//这里的break是跳出while循环
                //break用于跳出while循环或switch case语句
            }
            else
            {
                cout << "输入错误,请重新输入:";
            }
        }
        //3.年龄
        int age = 0;
        cout << "请输入年龄:";
        while (true)
        {
            cin >> age;
            if (age >= 0)
            {
                abs->pArray[abs->m_Size].m_age = age;
                break;
            }
            else
            {
                cout << "输入错误,请重新输入:";
            }
        }
        //4.电话
        string Phone;
        cout << "请输入电话:";
        cin >> Phone;
        abs->pArray[abs->m_Size].m_Phone = Phone;
        //5.住址
        string Address;
        cout << "请输入地址:";
        cin >> Address;
        abs->pArray[abs->m_Size].m_Addr= Address;
        //6.更新通讯录人数
        abs->m_Size++;
        cout << "添加成功!!!" << endl;
        system("pause");//vs studio上运行没问题
        system("cls");
    }
}

//显
void ShowPerson(struct Address_Books* abs)
{
    if (abs->m_Size == 0)
    {
        cout << "当前的记录为空" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "姓名:" << abs->pArray[i].m_Name
                << "  性别:" << (abs->pArray[i].m_Sex == 1 ? "男" : "女")
                << "  年龄:" << abs->pArray[i].m_age
                << "  电话:" << abs->pArray[i].m_Phone
                << "  家庭住址" << abs->pArray[i].m_Addr << endl;
            
        }
        system("pause");//按任意键继续
        system("cls");//清屏
    }
}

//联系人存在
int IsExit(struct Address_Books * abs, string name)
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        if (abs->pArray[i].m_Name == name)
        {
            return i;
        }
        
    }
    return -1;
}

//删除联系人
void DeletePerson(struct Address_Books* abs)
{
    cout << "请您输入要删除的联系人:";
    string name;
    cin >> name;
    int ret = IsExit(abs, name);
    if (ret == -1)
    {
        cout << "查无此人" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        //数据前移进行覆盖
        for (int i = ret; i < abs->m_Size; i++)
        {
            abs->pArray[i] = abs->pArray[i + 1];
        }
        abs->m_Size--;//更新人员数
        cout << "删除成功" << endl;
    }
}

//查找指定联系
void FindPerson(struct Address_Books* abs)
{
    string name;
    cout << "请输入你要查找的人的姓名:";
    cin >> name;
    int ret=IsExit(abs, name);
    if (ret == -1)
    {
        cout << "查无此人" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        cout << "姓名:" << abs->pArray[ret].m_Name
            << "  性别:" << (abs->pArray[ret].m_Sex == 1 ? "男" : "女")
            << "  年龄:" << abs->pArray[ret].m_age
            << "  电话:" << abs->pArray[ret].m_Phone
            << "  家庭住址" << abs->pArray[ret].m_Addr << endl;
        system("pause");
        system("cls");
    }
}

//修改指定联系人
void ModifyPerson(struct Address_Books* abs)
{
    string name;
    cout << "请输入你要查找的人的姓名:";
    cin >> name;
    int ret = IsExit(abs, name);
    if (ret == -1)
    {
        cout << "查无此人" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        //输入
        //1.名字
        cout << "请输入名字:";
        string name;
        cin >> name;
        abs->pArray[ret].m_Name = name;
        //2.性别
        int sex;
        cout << "1 for boy" << endl;
        cout << "2 for girl" << endl;
        cout << "请输入性别:";
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->pArray[ret].m_Sex = sex;
                break;//这里的break是跳出while循环
                //break用于跳出while循环或switch case语句
            }
            else
            {
                cout << "输入错误,请重新输入:";
            }
        }
        //3.年龄
        int age = 0;
        cout << "请输入年龄:";
        while (true)
        {
            cin >> age;
            if (age >= 0)
            {
                abs->pArray[ret].m_age = age;
                break;
            }
            else
            {
                cout << "输入错误,请重新输入:";
            }
        }
        //4.电话
        string Phone;
        cout << "请输入电话:";
        cin >> Phone;
        abs->pArray[ret].m_Phone = Phone;
        //5.住址
        string Address;
        cout << "请输入地址:";
        cin >> Address;
        abs->pArray[ret].m_Addr = Address;
        cout << "修改成功!!!" << endl;
        system("pause");//vs studio上运行没问题
        system("cls");
    }
}

//清空联系人
void CleanPerson(struct Address_Books* abs)
{
    abs->m_Size = 0;
    cout << "通讯录已清空" << endl;
    system("pause"); 
    system("cls");

}
int main()
{
    int select = 0;
    struct Address_Books abs;
    abs.m_Size = 0;
    while (true)
    {
        ShowMenu();
        cout << "请输入:";
        cin >> select;
        switch (select)
        {
        case 0://退
        {
            cout << "欢迎下次使用" << endl;
            //system("pause");---vscode bug
            return 0;//main函数的返回值--->直接让主函数结束
            break;
        }
        case 1://增
            AddPerson(&abs);
            break;
        case 2://删
        {
            DeletePerson(&abs);
            break;
        }  
        case 3://查 
            FindPerson(&abs);
            break;
        case 4://改
            ModifyPerson(&abs);
            break;
        case 5://清
            CleanPerson(&abs);
            break;
        case 6://显
            ShowPerson(&abs);
            break;
        default:
            break;
        }
    }
    //system("pause");
    return 0;
}