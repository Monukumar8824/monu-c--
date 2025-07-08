#include<iostream>
using namespace std;

int main()
{
   int Num,rev = 0;
   cout <<"Enter N number: "<<endl;
   cin >> Num;

   while(Num > 0) {
    int digit = Num % 10;
    rev = rev * 10 + digit;
    Num = Num / 10;
   }
   cout <<"Reversed = "<< rev;
   return 0;
    
}