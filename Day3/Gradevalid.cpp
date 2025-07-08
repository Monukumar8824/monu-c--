#include <iostream>
using namespace std;

int main() 
{
    float per, sci,eng,maths;
    cout <<"Enter the marks: ";
    cin >> sci >> eng >> maths;

    per = ( sci+eng+maths)/3;

    if(per >= 34)
    {
        if( per >= 75)
        {
            cout <<"You passed with distinction";
        }
        else 
        {
            cout <<"You passed";

        }
    }
    else 
    {
        cout <<"You fail";
    }
}