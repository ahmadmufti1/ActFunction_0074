#include <iostream>
using namespace std;

float p,l;

void Input()
{
    cout << "Masukkan Panjan : ";
    cin >> p;
    cout << "Masukkan Lebar : "; 
    cin >> l;
}

float LuasPersegi(){
    return p*l;
}

void Output()
{
    cout << "Hasilnya = " << LuasPersegi();
}

int main()
{
    Input();
    Output();
}

#include <iostream>
using namespace std;

float a,t;

void Input()
{
    cout << "Masukkan Alas : ";
    cin >> a;
    cout << "Masukkan Tinggi : "; 
    cin >> t;
}

float LuasSegitiga(){
    return 0.5*a*t;
}

void Output()
{
    cout << "Hasilnya = " << LuasSegitiga();
}

int main()
{
    Input();
    Output();
}

