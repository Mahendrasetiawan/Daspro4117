#include <iostream>

using namespace std;

int main()
{
   int limit,input;
    int i;


    std::cout << "Masukkan ada berapa angka: ";
    std::cin >> limit;
    int min = 0;
    int max = 0;


    for(i=0;i<limit;i++)
    {
    std::cout << "Masukkan angka: ";
    std::cin >> input;
    if(i == 0){

    min = input;
    max = input;
    }
    else
    {
    if(input < min)
    min = input;
    if(input > max)
    max = input;
    }
    };
    std::cout <<"Max: " << max << std::endl;
    std::cout <<"Min: " << min << std::endl;


    return 0;
}
