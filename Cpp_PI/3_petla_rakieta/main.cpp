#include <iostream>

#include <cstdlib>

using namespace std;

int main()
{
    for (int i=10; i>=0; i--)
    {
        Sleep(1000);
        system("cls");
        cout << i << endl;
    }
    system("cls");
    cout << "JEBUT!!!" << endl;
    return 0;
}
