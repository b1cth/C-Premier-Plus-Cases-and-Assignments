//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//    char animal[20] = "bitch";
//    const char* bird = "wren"; //指针指向的内容是常量，但是指针指向的地址是可以改变的
//    char* p;
//    
//    cout << "animal: " << animal << endl;
//    cout << "bird: " << bird << endl;
//    cout << "enter a kind of animal: ";
//    cin >> animal;
//    cout << "now the animal is : " << animal << "" << endl;
//    p = animal;
//    cout << "animal: " << animal << " at " << (void*)animal << endl;
//    cout << "p: " << p<<" at " << (void*)animal << endl;
//
//    //给P开辟内存空间存储animal里面的值
//    p = new char[strlen(animal) + 1]; //animal的长度加上最后的空字符
//    strcpy_s(p, strlen(animal) + 1, animal);
//    cout << "Now the value of p: " << p << " at " << (void*)p << endl;
//    delete [] p; //释放ps指向的内存，但不会删除指针ps本身。(这是删除数组指针的方式)
//    return 0;
//}
//
//
