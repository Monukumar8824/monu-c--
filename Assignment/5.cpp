#include<iostream>
using namespace std;

int main()
{
    int Num;
    cout <<"Enter a number: ";
    cin>> Num;

    int count = 0;

    if(Num == 0) {
        count = 1;
    } else {
        while(Num != 0) {
            Num = Num/10;
            count++;
        }
    }

    cout <<"Number of digits = "<<count;
    return 0;
}