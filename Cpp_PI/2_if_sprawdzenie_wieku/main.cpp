#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat? "; cin >> wiek;

    if (wiek<18)
    {
        cout << "Nie jestes pelnoletni. Nie mozesz zostac prezydentem.";
    }
    else if (wiek>=18 && (wiek<35))
    {
        cout << "Jestes pelnoletni, ale nie mozesz zostac prezydentem.";
    }
    else if (wiek>=35 && (wiek<150))
    {
        cout << "Jestes pelnoletni i  mozesz zostac prezydente.m";
    }
    else
    {
        cout << "Hola hola! Czy na pewno jestes czlowiekiem?";
    }
    return 0;
}
