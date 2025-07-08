#include<iostream>
using namespace std;

int main()
{
    int Num;
    long long fact = 1;
    cout << "Enter N Number: "<<endl;
    cin >> Num;

    int i = 1;
    while(i<=Num)
    {
        fact = fact * i;
        i++;
    }
    cout <<"Factorial = "<<fact;
}