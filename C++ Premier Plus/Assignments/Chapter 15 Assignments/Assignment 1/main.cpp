#include "TV.h"
#include <iostream>
int main()
{
    Remote remote;
    TV Sony;
    Sony.set_RemoteStatus(remote);
    std::cout << "Now turn on the TV.\n";
    Sony.onoff();
    Sony.set_RemoteStatus(remote);
}
