#include<iostream>
using namespace std;

int main()
{
    int Num, original, rev =0;
    cout <<"Enter N num: "<<endl;
    cin >> Num;

    original = Num;

    while(Num > 0) 
    {
        int digit = Num % 10;
        rev = rev * 10 + digit;
        Num = Num / 10;
    }

    if(rev == original) {
        cout <<"Palindrome " <<endl;
    } else {
        cout <<"Not Palindrome ";
    }
    return 0;

}