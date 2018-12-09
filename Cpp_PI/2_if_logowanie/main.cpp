#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Witaj w aplikacji Poczta!"  << endl;
    cout << "Podaj login: "; cin >> login;
    cout << "Podaj haslo: "; cin >> haslo;

    if ((login=="admin")&&(haslo=="szarlotka"))
    {
        cout << "Logowanie poprawne...";
    }
    else
    {
        cout << "Podales zly login lub haslo...";
    }


    return 0;
}
