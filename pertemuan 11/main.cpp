#include <iostream>

using namespace std;

int main()
{
    cout << "Bilangan Fibonacci kurang dari 100." << endl;

    int q = 100, a1 =0, b2 = 1,hasil;
    hasil = a1 + b2;

    while (hasil <= q) {
        cout << hasil << endl;
        a1 = b2;
        b2 = hasil;
        hasil = a1 + b2;
    }
    return 0;
}
