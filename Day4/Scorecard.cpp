#include <iostream>
using namespace std;

int main()
{
    int m;
    cout <<"Enter the marks: "<<endl;
    cin >> m ;

    if(m>=90)
    {
        cout <<"you got achieved A grade: ";
    }
    else if(m>=80)
    {
        cout <<"You got achieved B grade: ";

    }
    else if(m>=70)
    {
        cout <<"You got  achieved C grade: ";
    }
    else if(m>=60)
    {
       cout <<"You got achieved  D grade: ";
    }
    else 
    {
        cout <<"You are Fail: ";
    }
}