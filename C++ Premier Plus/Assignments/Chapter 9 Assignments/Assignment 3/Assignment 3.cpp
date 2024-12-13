#include "header.h"

int main()
{
    //在缓冲区内创建
    cout << "在缓冲区内创建" << endl;
    chaff* obj1 = new (Buffer) chaff[2];

    // 示例：初始化对象
    for (int i = 0; i < 2; i++)
    {
        strcpy_s(obj1[i].dross, "Example1");
        obj1[i].slag = i;
    }

    // 打印对象内容
    for (int i = 0; i < 2; i++)
    {
        cout << "#" << i + 1<< " dross: " << obj1[i].dross << endl;
        cout << "#" << i + 1<< " slag: " << obj1[i].slag << endl;
    }
    
    //使用常规new运算符
    cout << "使用常规new运算符\n";
    chaff *obj2 = new chaff[2];
    for (int i = 0; i < 2; i++)
    {
        strcpy_s(obj2[i].dross, "Example2");
        obj2[i].slag = i;
    }

    // 打印对象内容
    for (int i = 0; i < 2; i++)
    {
        cout << "#" << i + 1 << " dross: " << obj2[i].dross << endl;
        cout << "#" << i + 1 << " slag: " << obj2[i].slag << endl;
    }
    delete[]obj1;
    delete[]obj2;
    return 0;
}

