#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int liczba;

int main()
{
    cout << "Witaj w losowaniu! Za 3 sekundy nastapi zwolnienie blokady" << endl;
    Sleep(3000);
    cout<<endl;

//W tym losowaniu liczby mog¹ siê powtórzyæ, nale¿y zastosowaæ taki kod:
// http://miroslawzelent.pl/kurs-c++/losowanie-bez-powtorzen-php-c++-gra-milionerzy/

    srand(time(NULL));
    for (int i=1; i<=6; i++)
    {
        liczba = rand()%49+1;
        Sleep(1000);
        cout<<liczba<<"\a"<<endl;
    }

    return 0;
}
