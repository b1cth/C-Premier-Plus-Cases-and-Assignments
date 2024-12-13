#include "header.h"
int main()
{
    Cow milkcow;
    milkcow.ShowCow();

    Cow blackcow("blackcow", "Drink milk", 500);
    blackcow.ShowCow();

    Cow whitecow = blackcow;
    whitecow.ShowCow();

    Cow mixedcow(milkcow);
    mixedcow.ShowCow();
}
