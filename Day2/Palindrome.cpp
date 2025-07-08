#include <iostream>
using namespace std;

int main() 
{
    int value,first,last;
    cout <<"Enter a Number";
    cin >> value;

    first = value / 10;
    last = value % 10;

    if(first == last)
    {
        cout <<"Your number is Palindrome";

    }
    else
    {
        cout <<"Your number is not palindrome";
    }
    return 0;
}