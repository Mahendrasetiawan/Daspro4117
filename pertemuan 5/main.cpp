#include <iostream>

using namespace std;

int main()
{
  /*

   cout << "Program Menghitung luas persegi panjang";


    float p,l;

    cout << "\nMasukan panjang   : ";
    cin >> p;
    cout << "Masukan lebar     : ";
    cin >> l;

    cout << "Hasilnya adalah  : " << p*l << endl;
    */

    cout << "Progam menghitung luas lingkaran";

    float r,l;
    const float phi = 3.14;

    cout << "\nMasukan jari jari lingkaran   :";
    cin >>r;

    l = phi*r*r;

    cout << "luas lingkaran adalah  :" << l << endl;







    return 0;
}
