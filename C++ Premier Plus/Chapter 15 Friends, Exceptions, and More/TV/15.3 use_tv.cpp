//#include "15.1 tv.h"
#include "15.4 tvfm.h"
#include <iostream>
int main()
{
    using std::cout;
    TV s42;
    cout << "Initial settings: for 42\" TV: \n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout << "\nadjusted settings for 42\" TV:\n";
    s42.settings();

    Remote grey;
    grey.set_channel(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "42\" TV settings after using remote:\n";
    s42.settings();

    TV s58(TV::On);
    s58.set_mode();
    grey.set_channel(s58, 28);
    cout<<"Settings for 58\" : \n";
    s58.settings();
    return 0;
}
