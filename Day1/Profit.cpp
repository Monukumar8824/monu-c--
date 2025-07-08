#include <iostream>
using namespace std;

// Function definition
float fun(int purchase);
int main()
{
    int purchase;
    float profit;
    cout <<"Enter purchase amount: ";
    cin >> purchase;
    profit = fun(purchase);
    cout << "profit is: " << profit << endl;
    return 1;
}
// Function definition
float fun(int purchase)
{
    float profit;
    profit = purchase * 0.15;
    return profit;
}