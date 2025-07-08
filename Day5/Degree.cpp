#include <iostream>
using namespace std;

int main()
{
    int index;
    cout<<"Enter the index number: " <<endl;
    cin >> index;

    switch(index)
    {
        case 10:   
        case 9:
        case 8:  cout <<"Honours";
                 break;

        case 7: 
        case 6:  cout <<"First Division";
                 break;
                 
        case 5:  cout <<"Second Division";
                 break;

        case 4:  cout <<"Third Division";
                 break;
        case 3:
        case 2:
        case 1:         
        case 0:  cout <<"Fail";

        default: cout <<"Invalid";

    }
}