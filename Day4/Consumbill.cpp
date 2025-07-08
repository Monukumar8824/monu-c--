#include <iostream>
using namespace std;

float bill(float unit);
int main()
{
    float price,unit;
    cout <<"Enter the unit: " <<endl;
    cin >> unit;
    price = bill(unit);
    cout <<"Your price is: " << price;

    return 0;
}
float bill(float unit)
{
    float price;
    price = unit * 0.5; // return unit * 0.5;
    return price;
    
}