#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //instalasi atau deklarasi
    int X = 2022;
    int Q1 = 18;
    int Q2= 175;
    int Q3 = 4117;
    float Q4 = 170;
    string C1 = "Mahendra Setiawan";
    string C2 = "A11.2022.14638";
    string C3 = "Game, Nulis, Music";

    //output identitas
    cout << "Hello world!" << X;

    printf("\n\nIdentitas");
    cout << "\nNama     :   " << C1;
    cout << "\nNim      :   " << C2;
    cout << "\nKelp     :   " << Q3;

    //data pribadi
    printf("\n\nData Pribadi");
    cout << "\nUmur     :   " << Q1;
    cout << "\nTinggi   :   " << Q2;
    cout << "\nFavorite :   " << C3;

    printf("\n\nDaspro Pertemuan ke-3");
    return 0;
}
