#include <iostream>
using namespace std;

int main() {
    int days,month,remaining_days,week;

    cout <<"Enter the number of days";
    cin >> days;
    
    month = days/30;
    remaining_days = days%30;
    week = days/7;

    cout <<"Total number of month is: " <<month <<endl;
    cout <<"Number of remaining days: " <<remaining_days <<endl;
    cout <<"Number of week: " <<week <<endl;
}