#include<iostream>
using namespace std;

int main() 
{
    int Num;
    cout <<"Enter N number: "<<endl;
    cin >> Num;
    
    int count = 0;

    while(Num>0)
    {
        if(Num%2 == 1) {
            count++;
        }
        Num = Num/2;
    }
    cout <<"Number of 1's binary = " << count;
    return 0;
}