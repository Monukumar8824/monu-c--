#include<iostream>
using namespace std;

int main()
{
    int Num;
    cout <<"Enter a decimal number: "<<endl;
    cin >> Num;

    int binary = 0;
    int place = 1;

    while(Num>0) {
        int rem = Num % 2;
        binary  = binary + rem * place;
        Num = Num / 2;
        place = place * 10;
    }

    cout <<"Binary: " <<binary;
    return 0;
}