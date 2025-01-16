#include "golf.h"

int main()
{
    golf competitors[num];
    int counter = 0;
    int i = 0;
    do {
        i = setgolf(competitors[counter]);
        if (i == 0) {
            break;
        }
        counter++;
        cin.get();
    } while ((i != 0) && (counter < num));
    for (int m = 0; m < counter; m++)
    {
        showgolf(competitors[m]);
    }
    cout << "End..." << endl;
}