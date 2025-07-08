#include <iostream>
using namespace std;

// Function declaration
int fun(int a, int b);

int main() 
{
    int a,b,c;
    //Taking input from the user
    cout<<"Enter Two Number";
    cin >> a >> b;

    // Function call to get the sum
    c = fun(a,b);

    //Output the result
    cout << c;
    return 0;
}
int fun(int a, int b)
{
    int c;
    c = a + b;
    return c;
}