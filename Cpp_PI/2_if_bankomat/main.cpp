#include <iostream>
#include <windows.h>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj w Banku Pekao S.A.!" << endl;
    Sleep(1000);
    cout << "Podaj numer PIN: "; cin >> PIN;

    if (PIN=="1729")
    {
        cout << "Poprawny PIN";
    }
    else cout << "Niepoprawny PIN";

    return 0;
}
