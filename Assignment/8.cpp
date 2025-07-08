#include<iostream>
using namespace std;

int main()
{
    int N;
    cout <<"Enter N: "<<endl;
    cin >> N;

    int num = 2;
    while(num<=N) {
        int isPrime = 1;
        int i = 2;

        while(i*i <= num) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }
        if(isPrime) {
            cout << num <<" ";
        }
        num++;
    }
    return 0;


}