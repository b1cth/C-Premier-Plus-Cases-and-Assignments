//#include <iostream>
//using namespace std;
//int main()
//{
//    const int ArSize = 20;
//    char name[ArSize];
//    char dessert[ArSize];
//
//    //cout << "Enter your name : \n";
//    //cin.getline(name, ArSize); //getline可以获取空格，但不会保存换行符，换行符更改为了空格符\0
//    //cout << "Enter your favorite dessert:\n";
//    //cin.getline(dessert, ArSize);
//    //cout << "I have some delicious " << dessert;
//    //cout << " for you, " << name << ".\n";
//
//
//
//    cout << "Enter your name : \n";
//    cin.get(name, ArSize).get(); //getline可以获取空格，但不会保存换行符，换行符更改为了空格符\0
//    cout << "Enter your favorite dessert:\n";
//    cin.getline(dessert, ArSize);//get第一个就获取了换行符，后面不会获取内容。
//    cin.get();//获取缓冲区里面的换行符
//    cout << "I have some delicious " << dessert;
//    cout << " for you, " << name << ".\n";
//
//    return 0;
//}
//
//
