/*#include<iostream>
using namespace std;
int main() {
    int n, sum=0;
    cout<<"Enter the number: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        sum += i*i;
    }
    cout <<"Sum of squares = " << sum << endl;
    return 0;
} */
/*#include<iostream>
using namespace std;
int main() {
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    for(int i=2; i<=n; i++) {
        if(n%i==0) {
            cout <<"Smallest divisor (greater than 1) = " << i << endl;
            break;
        }
    }
    return 0;

} */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Prime numbers up to " << n << " are:\n";
    for(int i = 2; i <= n; i++) {
        bool isPrime = true;
        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
} */
/*#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0 && i % 5 != 0) {
            count++;
        }
    }
    cout << "Count = " << count << endl;
    return 0;
} */
/*#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cout << "Enter  the number: ";
    cin >> n;
    for(; n > 0; n /= 10) {
        int digit = n % 10;
        rev = rev * 10 + digit;
    }
    cout << "Reversed number = " << rev << endl;
    return 0;
} */
/*#include <iostream>
using namespace std;

int main() {
    int n, original, rev = 0;
    cout << "Enter the  number: ";
    cin >> n;
    original = n;
    for(; n > 0; n /= 10) {
        int digit = n % 10;
        rev = rev * 10 + digit;
    }
    if(rev == original) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
} */
/*#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            sum -= i;
        else
            sum += i;
    }
    cout << "Sum = " << sum << endl;
    return 0;
} */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial = " << fact << endl;
    return 0;
} */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 10; i >= 1; i--) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
} */
/*#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter the number: ";
    cin >> n;
    if(n == 0) {
        count = 1;
    } else {
        for(; n != 0; n /= 10) {
            count++;
        }
    }
    cout << "Number of digits = " << count << endl;
    return 0;
} */
/*#include <iostream>
using namespace std;

int main() {
    int n=4;
    for(int i = 1; i <= n; i++) {
        for(int num = 1; num <= i; num++) {
            cout << num;
        }
        cout << endl;
    }

    return 0;
} */
/*#include <iostream>
using namespace std;

int main() {
    int n=4;
    
    for(int i = 1; i <= n; i++) {
        
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
     
        for(int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
} */
/*#include <iostream>
using namespace std;

int main() {
    int n=4;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
} */
/*#include <iostream>
using namespace std;

int main() {
    int n=5;
    for(int i = 0; i < n; i++) {
       for(int j = 0; j< i; j++) {
            cout << " ";
        }
        for(int k = 0; k < n-i; k++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
} */
/*#include <iostream>
using namespace std;

int main() {
    int n=4;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    return 0;
} */
/*#include <iostream>
using namespace std;

int main() {
    int n=5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j==i || j==n-i-1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}  */
#include <iostream>
using namespace std;
int main()
{
    int n=3;
    for(int i=1; i<=n; i++) 
    {
        for(int j=1; j<=n-i; j++)
        {
            cout <<" ";

        }
        for(int k=1; k<=i; k++)
        {
            cout << k;
        }
        for(int l=i-1; l>=1; l--)
        {
            cout <<l;

        }
        cout << endl;
    }
    
}













