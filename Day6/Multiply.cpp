#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter a number" << endl;
    cin >> n;
    int i = 1;

    while(i <= 10)
    {
        cout << i <<" * " << n << " = " << i*n << endl;
        cout << endl;
        i = i + 1;
    }
}