#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout <<"Enter two numbers: "<<endl;
    cin >> a >> b;

    while(a != b) {
        if(a>b) {
            a = a-b;
        } else {
            b = b-a;
        }
    }
    cout <<"GCD = " << a;
    return 0;
}