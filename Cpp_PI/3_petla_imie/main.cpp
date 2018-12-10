#include <iostream>
#include <windows.h>

using namespace std;

string imie; int liczba;
int main()
{
    cout << "Podaj imie: ";
    cin>>imie;
    cout << "Podaj dodatnia liczbe calkowita: ";
    cin>>liczba;

    for (int i=1; i<=liczba; i++)
    {
        Sleep(100);
        cout<<i<<". "<<imie<<endl;
    }
    return 0;
