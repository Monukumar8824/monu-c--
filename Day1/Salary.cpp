#include <iostream>
using namespace std;

float fun(float sal);
int main()
{
    float sal,bonus;
    float net_sal;
    cout <<"Enter your salary";
    cin >> sal;
    net_sal = sal + (sal * 0.15);
    cout << "net_sal: " << net_sal;
    net_sal = fun(sal);
}
float fun(float sal)
{
    float net_sal;
    net_sal = sal + (sal * 0.15);
    return  net_sal;
}