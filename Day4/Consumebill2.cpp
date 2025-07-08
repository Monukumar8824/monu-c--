#include <iostream>
using namespace std;

float bill (float units);
int main()
{
    float price,units, extraunit;

    cout <<"Enter the unit" <<endl;
    cin >> units;
    price = bill(units);
    cout <<"Your price is: " << price;
    return 0;

}
float bill (float units)
{
    
    if(units <= 200)
    {
        return units * 0.5;
    }
    else if(units <= 300)
    {
        return (units * 0.50) + 100 + (units-200)*0.75;
    }
    else if(units <= 400)
    {
        return (units * 0.50) + 100 + 200 + (units-300) * 0.90;
    }
    else if(units <= 500)
    {
        return (units * 0.50) + 100 + 200 + 300 + (units-400) * 1.0;
    }
    else if(units <= 600)
    {
        return (units * 0.50) + 100 + 200 + 300 + 400 + (units - 500) * 2.0;
    }
    
}