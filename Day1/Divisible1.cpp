#include <iostream>
using namespace std;

int main() {
    int num;

    cout <<"Enter the number";
    cin >> num ;

    if(num % 7 == 0 && num % 11 == 0)
    {
        cout <<"Number is divisible by 7 and 11";
    }
    {
        cout <<"Number is not divisible by 7 and 11";
    }
}