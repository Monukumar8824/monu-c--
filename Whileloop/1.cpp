/*#include <iostream>
using namespace std;
int main() {
    int i=1;
    while(i <= 5) {
        cout << i <<" ";
        i++;
    }
}  // Output:- 1 2 3 4 5  */
/*#include <iostream>
using namespace std;
int main() {
    int i = 5;
    while (i > 0) {
    cout << i-- << " ";
}
}  //Output:- 5 4 3 2 1  */
/*#include <iostream>
using namespace std;
int main() {
    int i = 1;
    while (i < 10) {
    if (i % 3 == 0) break;
    cout << i << " ";
    i += 2;
}
}  //Output:- 1   */
/*#include <iostream>
using namespace std;
int main()
{
   int i = 0;
    while (i++ < 3) {
    cout << i << " ";
}
}  //Output:- 1 2 3  */
/*#include <iostream>
using namespace std;
int main()
{
    int x = 2, count = 0;
while (x <= 100) {
    x = x * 2;
    count++;
}
cout << count;
}   //Output:- 6  */
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int sum = 0;
    while(n>0) {
        sum += n;
        n--;
    }

    cout << "Sum of first " << n << " natural numbers = " << sum << endl;
    return 0;
}  
/*#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    int num = n; // store original number

    if(n == 0) count = 1;
    while(n != 0) {
        n = n / 10;
        count++;
    }

    cout << "Number of digits in " << num << " = " << count << endl;
    return 0;
}  */
/*#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int reversed = 0, rem;
    int num = n; // store original number

    while(n != 0) {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n = n / 10;
    }

    cout << "Reversed number of " << num << " = " << reversed << endl;
    return 0;
}  */
/*#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int reversed = 0, rem;
    int num = n; // store original number

    while(n != 0) {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n = n / 10;
    }

    if(num == reversed)
        cout << num << " is a Palindrome." << endl;
    else
        cout << num << " is not a Palindrome." << endl;

    return 0;
}  */
/*#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long fact = 1;
    int i = 1;

    while(i <= n) {
        fact *= i;
        i++;
    }

    cout << "Factorial of " << n << " = " << fact << endl;
    return 0;
}  */
/*#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    int num = n; // Store original number

    while(n != 0) {
        if(n % 2 == 1) {
            count++;
        }
        n = n / 2;
    }

    cout << "Number of 1's in binary representation of " << num << " = " << count << endl;
    return 0;
}  */
/*#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    while(n >= 10) { // Keep going until single-digit
        int sum = 0;
        while(n != 0) {
            sum += n % 10;
            n = n / 10;
        }
        n = sum; // Update n with the new sum
    }

    cout << "Single-digit sum = " << n << endl;
    return 0;
}  */
/*#include<iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int num = 2;
    while(num <= N) {
        int i = 2;
        int isPrime = 1; // assume prime

        while(i <= num / 2) {
            if(num % i == 0) {
                isPrime = 0; // not prime
                break;
            }
            i++;
        }

        if(isPrime) {
            cout << num << " ";
        }
        num++;
    }

    cout << endl;
    return 0;
}   */
/*#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    while(a != b) {
        if(a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }

    cout << "GCD = " << a << endl;
    return 0;
}  */
/*#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int num = n; // store original number
    long long revBinary = 0;
    int place = 1;

    while(n != 0) {
        int rem = n % 2;
        revBinary = revBinary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    cout << "Binary representation of " << num << " = " << revBinary << endl;
    return 0;
}  */











