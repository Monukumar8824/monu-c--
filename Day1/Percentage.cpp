#include <iostream>
using namespace std;

// Function definition
float fun(int s1, int s2, int s3);

int main()
{
    int s1,s2,s3;
    float percentage;
    cout <<"Enter your marks";
    cin >> s1 >> s2 >>s3;

    percentage = fun(s1,s2,s3);
    cout << "Percentage is: " << percentage;
    return 0;
}
float fun(int s1, int s2, int s3)
{
    float percentage;
    float sum = s1+s2+s3;
    percentage = sum * 0.3;
    return percentage;

}

