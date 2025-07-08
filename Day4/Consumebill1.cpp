#include <iostream>
using namespace std;

float bill(float unit);
int main()
{
    float price,unit,extraunit;
    cout <<"Enter the unit: " <<endl;
    cin >> unit;
    price = bill(unit);
    cout <<"Your price is: " << price;
    return 0;    
}
float bill(float unit)
{
    float charge=100, extraunit;
    
    if(unit <= 200)
    {
        return unit * 0.5;
    }
    else if(unit > 200)
    {
        extraunit = unit - 200;
        return (unit * 0.5) + 100 + extraunit * 0.75;

    }
}