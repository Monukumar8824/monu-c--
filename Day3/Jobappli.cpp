#include <iostream>
using namespace std;

int main() 
{
    int per, age;
    cout <<"Enter the percentage: " <<endl;
    cin >> per;
    cout <<"Enter Your age: "<<endl;
    cin >> age;
    
    if(per >= 70)
    {
        if(age >= 25)
        {
            cout <<"Your age is match: ";
        }
        else
        {
            cout <<"Age is not match: ";
        }
    }
    else 
    {
        cout <<"You are not eligible for this job: ";
    }
}