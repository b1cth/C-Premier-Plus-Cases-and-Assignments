#include "header.h"


int main()
{
    Gunslinger g("John", "Marston", 10, 0.2);
    cout << "Gunslinger: \n";
    g.show();
    cout << "Gun Draw Time: " << g.draw() << "s.\n\n";

    PokerPlayer pkplayer("Arthor", "Morgan");
    pkplayer.show();
    pkplayer.showCard();
    pkplayer.draw();
    cout << "After Draw: \n";
    pkplayer.showCard();

    cout << endl;
    BadDude bd("Mika", "Vans");
    bd.show();
    bd.Gdraw();
    cout << "He drawed another card...\n";
    bd.Cdraw();
    bd.show();
}
