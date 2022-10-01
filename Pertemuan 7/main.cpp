#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int q = 2;
    int z = 3;

    cout << " === Jurusan ==="  << endl;
    cout << "1. Teknik Informatika " << endl;
    cout << "2. Sistem Informatika " << endl;
    cout <<  "3. DKV" << endl;

    cout << "Masukan Jurusan : ";

    cin >> x;
    cout<< "Jurusan anda adalah : " ;
    if (x < 2 & x > 0) {
        cout << "Teknik Informatika" << endl;
    } else {
           cout << " Jurusan Tidak diketahui " << endl;
    }
    cin >> q;
     cout<< "Jurusan anda adalah : ";
    if (q < 3 & q > 1) {
        cout << "Sistem Informasi" << endl;
    }else {
        cout << "Jurusan tidak diketahui " << endl;
   }
    cin >> z;
     cout<< "Jurusan anda adalah : " ;
    if (z < 4 & z > 2 ) {
        cout << "DKV" << endl;
    }else {
        cout << " Jurusan tidak diketahui" << endl;
    }


    return 0;
}
