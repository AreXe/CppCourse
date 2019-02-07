#include <iostream>

using namespace std;

float metry;

float ile_cali(float m)
{
    //float cale=m*39.37;
    //return cale;

    return m*39.37;
}

float ile_jardow(float y);

void ile_mil(float m)
{
    cout<<"na mile"<<m;
}
int main()
{
    cout << "Podaj ile metrow: ";
    cin>> metry;

    cout<<metry<<"m to "<<ile_cali(metry)<<"cali";
    cout<<metry<<"m to "<<ile_jardow(metry)<<"jardow";

    return 0;
}

float ile_jardow(float y)
{
    return y*1.0936;
}
