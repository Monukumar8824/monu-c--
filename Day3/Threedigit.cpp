#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout <<"Enter the number: ";
    cin >> num;

    if ( num >=100 || num <= 999)
    {
        if ( num % 2 == 0)
        {
            cout <<"Number is even";

        }
        else 
        {
            cout <<"Number is not even but it is  not three  digit";
        }
    
    }
    else 
        {
            cout <<"Number is not three digit";
        }
}