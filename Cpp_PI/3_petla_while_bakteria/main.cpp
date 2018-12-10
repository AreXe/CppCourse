#include <iostream>

using namespace std;

int populacja=1; int godzin=0;
int main()
{
    while(populacja<1000000000)
    {
        godzin++;
        populacja = populacja *2;

        cout<<"Minelo godzin: "<<godzin<<endl;
        cout<<"Liczba bakterii: "<<populacja<<endl;
    }

    cout << populacja;
    return 0;
}
