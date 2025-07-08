#include<iostream>
using namespace std;

int main() 
{
    int n, i = 2;
    cout <<"Enter number: " <<endl;
    cin >> n;

    while(i<= n)
    {
        int j = 2, isPrime = 1;
        while(j<i) 
        {
            if(i%j == 0) {
                isPrime = 0;
                break;
            }
            j++;
        }
        if(isPrime)
           cout <<i<<" ";
           i++;
    }
    cout <<endl;
    return 0;
}