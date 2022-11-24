#include <iostream>

using namespace std;

int main()
{
    cout << "SISTEM AKAN BERHENTI JIKA ANDA MENGETIKAN ANGKA : -99" << endl;
    cout << "====================================================="<< endl;
   int x;
    for(int x=0;;x++){
        cout << "Masukan angka :";
        cin >> x;
        if(x == -99){
        cout << "Sistem berhenti...";
        break;
        }
    }


    return 0;
}
