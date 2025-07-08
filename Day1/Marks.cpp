#include <iostream>
using namespace std;

// Function declaration
int fun(int m1, int m2, int m3);

int main()
{
    int s1,s2,s3;
    int sum;
    cout <<"Enter subject marks";
    cin >> s1 >> s2 >> s3;
    sum = s1+s2+s3;
    cout <<"Total marks";
    cout << sum;
    return 1;
}
int fun(int m1, int m2, int m3)
{
    int sum;
    sum = m1 + m2 + m3;
    return sum;
}