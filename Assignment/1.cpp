#include <iostream>
using namespace std;

int main()
{
    int Num, sum = 0;
    
    cout <<"Enter the N number: "<<endl;
    cin >> Num;
    
    int i = 1;
    while (i<=Num) {
       sum = sum + i;
       i++;
    }
    cout <<"Sum = " << sum;
    return 0;


}