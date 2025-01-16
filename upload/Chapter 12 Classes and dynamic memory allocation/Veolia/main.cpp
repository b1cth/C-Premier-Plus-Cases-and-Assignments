#include "header.h"

int main()
{   
    cout << "Ask Jie if you need to update the namelist\n\n";
    string package;
    package = select_package();//选择package类型 
    while (true) {
        string guestName;
        string currentDate;
        
        unsigned int roomNumber;
        currentDate = getCurrentDate();//获取当前日期
        map<int, std::string> guestMap = createGuestMap();//生成客人名单
         
        cout << "Please Enter Guest Room Number:";
        cin >> roomNumber;//输入房间号
        guestName = returnGuestName(roomNumber, guestMap);//获取客人名字

        cout << endl;
        cout << "Room " << roomNumber << " " << guestName << " " << package << " " << currentDate << endl;
        cout << endl;
        cout << "Next: " << endl;
    }
    

}
