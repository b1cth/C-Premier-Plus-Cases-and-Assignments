#include <set>
#include <iostream>
#include <algorithm>
int main()
{
    using std::set, std::string, std::cout, std::endl, std::cin;
    set<string> MattFriends;
    set<string> PatFriends;
    string temp;
    cout << "Please enter Matt's friends names.(Enter \"done\" to finish)\n";
    while (cin >> temp && temp != "done") {
        MattFriends.insert(temp);
    }
    cout << "Please enter Pat's friends names.(Enter \"done\" to finish)\n";
    while (cin >> temp && temp != "done") {
        PatFriends.insert(temp);
    }
    //int size = MattFriends.size() + PatFriends.size();
    set<string> fulllist;
    fulllist.insert(MattFriends.begin(), MattFriends.end());
    fulllist.insert(PatFriends.begin(), PatFriends.end());
    std::ostream_iterator<string> ost_itr(cout, " ");
    cout << "The complete party list: \n";
    std::copy(fulllist.begin(), fulllist.end(), ost_itr);
}
