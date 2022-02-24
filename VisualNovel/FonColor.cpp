#include "FonColor.h"
void FonColor::zatemnenie(RenderWindow& win)
{
    int t = 0;
    while (t < 255)
    {
        FonColor fon(50);
        win.draw(fon.getFon());
        win.display();
        Sleep(10);
        t++;
    }
}