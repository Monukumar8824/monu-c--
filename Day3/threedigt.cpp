#include <iostream>
using namespace std;

int main()
{
    int num;
    cout <<"Enter the number";
    cin >> num;

    if (num % 2 == 0)
    {
        cout <<"Number is even";
    }
    if (num % 2 == 1)  // or  if(n%2 ! =0)
    {
        cout <<"Number is odd";
    }
}