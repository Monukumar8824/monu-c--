#include<iostream>
using namespace std;

int main()
{
    int Num;
    cout <<"Enter a number: "<<endl;
    cin >> Num;

    while(Num >= 10)
    {
        int sum =0;
        while(Num>0) {
            sum = sum+(Num% 10);
            Num = Num/10;
        }
        Num = sum;
    }
    cout <<"Single digit sum = " << Num;
    return 0;
}