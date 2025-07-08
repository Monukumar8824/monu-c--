#include <iostream>
using namespace std;

int main()
{
    int age;
    cout <<"Enter the number: " <<endl;
    cin >> age;

    if(age <= 12)
    {
        cout <<"You are Child";
    }
    else if(age <= 18)
    {
        cout <<"You are adult";
    }
    else if(age <= 60)
    {
        cout <<"You are Old";
    }

}