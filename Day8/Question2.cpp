/*#include<iostream>
using namespace std;
int main() {
    for(int i=1; i<=5; i++) {
    cout << i << " ";
}
} //Output:- 1 2 3 4 5  */
/* #include<iostream>
using namespace std;
int main() {
    for(int i=5; i>=1; i--) {
    cout << i*i << " ";
}
} //Output:- 25 16 9 4 1  */
/*#include<iostream>
using namespace std;
int main() {
    for(int i=1; i<=3; i++) {
    for(int j=1; j<=i; j++) {
        cout << i*j << " ";
    }
    cout << endl;
}
} 
//Output:-
1
2 4
3 6 9 */
/*#include<iostream>
using namespace std;
int main() {
    for(int i=1; i<=4; i++) {
    for(int j=1; j<=i; j++) cout << i+j << " ";
    cout << endl;
}
}
//Output:-
2       
3 4     
4 5 6   
5 6 7 8  */
/*#include<iostream>
using namespace std;
int main() {
    int sum = 0;
for(int i=1; i<=5; i++) {
    if(i % 2 == 0) sum += i;
}
cout << sum;
} //Output:- 6  */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Even numbers " << n << ":\n";
    for(int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}  */

/*#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number: ";
    cin >> n;

    for(int i = 1; i <= n / 2; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }

    if(sum == n)
        cout << n << " is a perfect number.\n";
    else
        cout << n << " is not a perfect number.\n";

    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter  the number : ";
    cin >> n;

    int a = 0, b = 1;
    cout << "Fibonacci sequence:\n";
    for(int i = 1; i <= n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    cout << "Pythagorean triplets below 100:\n";
    for(int a = 1; a < 100; a++) {
        for(int b = a; b < 100; b++) {
            for(int c = b; c < 100; c++) {
                if(a * a + b * b == c * c) {
                    cout << a << ", " << b << ", " << c << endl;
                }
            }
        }
    }
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int a, b;
    long long res = 1;
    cout << "Enter base and exponent: ";
    cin >> a >> b;

    for(int i = 1; i <= b; i++) {
        res *= a;
    }
    cout << a << "^" << b << " = " << res << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    long long totalSum = 0;
    cout << "Enter the number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        long long fact = 1;
        for(int j = 1; j <= i; j++) {
            fact *= j;
        }
        totalSum += fact;
    }
    cout << "Sum of factorials = " << totalSum << endl;
    return 0;
}  */
#include <iostream>
using namespace std;

int main() {
    int n=3;
    for(int i = 1; i <= n; i++) {
        char ch = 'A' + i - 1;
        for(int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}





