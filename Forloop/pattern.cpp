/*#include <iostream>
using namespace std;

int main() {
    
    int n;
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=i; j++){
            cout << "* ";
            
        }
        cout <<endl;
        
    }
}*/
/*#include<iostream>
using namespace std;

int main()
{
    int n=4;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout <<endl;
    }
    return 0;
} */

/*#include <iostream>
using namespace std;
int main() 
{ 
    int n=3;
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=n-i+1; j++) 
        {
            cout <<"* ";
        }
        cout <<endl;
    }
} */
/*#include <iostream>
using namespace std;

int main() {
    int n;

    for(int i=1; i<4; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << j <<" ";
        }
        cout <<endl;
    }
} */

/*#include<iostream>
using namespace std;

int main() 
{
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
} */

/*#include<iostream>
using namespace std;
int main()
{
    int n;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5-i+1; j++)
        {
            
            for(int k=1; k<=5-j-1; k++)
            {
                cout <<"* ";
            }
            cout <<"* ";
           
        }
        cout << endl;
    }
} */
/*#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int num=1;
        for(int j=0; j<=i; j++)
        {
            cout << num << " ";
            num = num * (i-j)/(j+1);
        }
        cout << endl;
    }
    return 0;
} */
/*#include <iostream>
using  namespace std;
int main()
{
    int n=3;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout <<"*";
        }
        cout<<endl;
    }

    for(int i=n-1; i>=1;i--) {
        for(int j=1; j<=1; j++) {
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
} */
/*#include<iostream>
using namespace std;
int main() {
    int n=3, num=1;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++){
            cout << num <<" ";
            num++;
        }
        cout <<endl;
    }
    return 0;
    
} */
/*#include<iostream>
using namespace std;
int main() 
{
    int n=3;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        for(int k=1; k<= 2*i-1; k++) {
            cout<<"*";
        }
        cout <<endl;
    }
    return 0;
} */
/*#include <iostream>
using namespace std;
int main() 
{
    int n=3;
    for(int i=1; i<=n; i++) {
        // space 
        for(int j=1; j<=n-i; j++) {
            cout <<" ";
        }
        for(int k=1; k<=i; k++) {
            cout<<k;

        }
        for(int l=i-1; l>=1; l--) {
            cout << l;
        }
        cout << endl;
    }
    return 0;
} */
/*#include <iostream>
using namespace std;
int main() 
{
    int n=5;
    for(int i=1; i<=n; i++) {
        //left stars
        for(int s=1; s<=i; s++) {
            cout <<"*";
        }
        // space
        for(int j=1;j<= 2*(n-i); j++) {
            cout << " ";
        }
        //right stars
        for(int k=1; k<=i; k++) {
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
} */
/*#include <iostream>
using namespace std;
int main() 
{
    int n=5;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==0 || i==n-1) {
                cout <<"*";

            }else if(j==n-i-1) {
                cout <<"*";
            } else {
                cout <<" ";
            }
        }
        cout << endl;
    }
    return 0;
} */
/*#include<iostream>
using namespace std;
int main() {
    
    for(int i=1;i<=)
} */


/*#include<iostream>
using namespace std;
int main() {
    for(int i=0; i<3; i++) {
        for(int j=0; j<=i; j++)
        {
            cout << i+j;
            cout <<" ";
            
        }
    }
}//Output:-0 1 2 2 3 4 */
/*#include<iostream>
using namespace std;
int main() {
    int sum=0;
    for(int i=1; i<=5; i++) {
        sum += i*(6-i);
        cout << sum;
    } //Output:-513223035
} */
/*#include<iostream>
using namespace std;
int main()
{
    int fact=1;
    for(int i=5; i>=1; i--) {
        fact *= i;
        cout << fact;
    } // Output:-52060120120
} */
/*#include<iostream>
using namespace std;
int main() {
    int n=3;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j)
              cout << i << j << " ";

        }
    }
} //Output:- 00 11 22 */
/*#include<iostream>
using namespace std;
int main() {
    for(int i=0; i<4; i++) {
        for(int j=0; j<2; j++) {
            if(j==1)
             break;
             cout << i;
        }
    }
}  //Output: 0123 */
/*#include <iostream>
using namespace std;
int main() {
    int x=1;
    for(int i=0; i<3; i++) {
        x = x + i;
        cout << x <<" ";
    }
} //Output:- 1 2 4 */
/*#include<iostream>
using namespace std;
int main() {
    for(int i=1; i<=5; i++) {
        if(i%2 == 0)
         continue;
         cout << i << " ";
    }
} // Output:- 1 3 5  */
/*#include<iostream>
using namespace std;
int main() {
    for(int i=3; i>0; i--) {
        for(int j=i; j>0; j--) {
            cout << "*";
            
        }
        cout<<"\n";
    }
} Output:- ***
**
*      */
/*#include<iostream>
using namespace std;
int main() {
    int a=0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<=i; j++)
        {
            a++;
        }
        
    }
    cout << a;
} //Output:- 6 */
/*#include<iostream>
using namespace std;
int main() {
    int k=1;
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i; j++) {
            cout << k++ << " ";

        }
    }
}  //Output:- 1 2 3 4 5 6 7 8 9 10  */
/*#include<iostream>
using namespace std;
int main() {
    int  sum=0 ,n;
    for(int i=1; i<=n; i++) {
        sum += i*i;
        
    }
    cout << sum;
} //Output:- 1564558928  */
/*#include<iostream>
using namespace std;
int main() {
    int n;
    for(int i=2; i<=n; i++) {
        if(n%i==0) {
            cout << i;
            break;
        }
    }
}  //Output:- 2  */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    for(int i=2; i<=n; i++) {
        bool isPrime = true;
        for(int j=2; j*j <=i; j++) {
            if(i%j==0) 
            isPrime = false;
            if(isPrime) 
            cout << i << " ";

        }
    }
}  */
/*#include<iostream>
using namespace std;
int main() {
    int count=0,n;
    for(int i=1; i<=n; i++) {
       if(i%3==0 && i%5 != 0)
       count++;
       cout << count;
    }
}  */
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
/*#include <iostream>
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
}  */
/* pascal #include <iostream>
using namespace std;
int main() 
{
    int n=10, i,num;
    for(int i=0; i<n; i++) {
    int num=1;
    for(int j=0; j<=i; j++)
    {
        cout << num <<" ";
        num = num * (i-j) / (j+1);
    }
    cout << endl;
    }
}   */

















