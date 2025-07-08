#include <iostream>
using namespace std;

int main()
{
    int x,pow,base;

    cout <<"Enter a power number: "<< endl;
    cin >> pow;
    cout <<"Enter a base number: "<<endl;
    cin >> base;

    pow = 1;
    while(pow >= 1)
    {
        cout <<"The base of power: " << x * base << endl;
        pow = pow - 1;
    }
    return 0;
}