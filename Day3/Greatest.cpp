#include <iostream>
using namespace std;

int main() 
{
    int A,B,C;
    cout <<"Enter three  numbers: " <<endl;
    cin >> A >> B >> C;

    if ( A >= B)
    {
        if ( A >= C)
        {
            cout << A <<" is greatest!: ";
        }
        else
        {
            cout << C <<" is greatest!: ";
        }
    }
    else 
    {
        if(B >= C)
        {
          cout << B <<"is Greatest!";
        }
        else {
            cout << C <<"is Greatest!";
        }
       
    }   
    return 0; 
    
}