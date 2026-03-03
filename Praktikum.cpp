#include <iostream>
using namespace std;

//Deklarasi Variable Global
float p,l;
//Deklarasi Prosedur
void Input()
{
    cout << "Masukkan Panjan : ";
    cin >> p;
    cout << "Masukkan Lebar : "; 
    cin >> l;
}

//Proses
float LuasPersegi(){
    return p*l;
}

//Hasil Proses
void Output()
{
    cout << "Hasilnya = " << LuasPersegi();
}

//Menjalankan Program
int main()
{
    Input();
    Output();
}
