/* 6.Sum of natural num #include <iostream>
using namespace std;
int main()
{
    int n,  count =0;
    cout <<"Enter a number: ";
    cin >> n;
    while(n>0) {
        count++;
        n/=10;

    }
    cout << count;
}   */
/*7.#include <iostream>
using namespace std;
int main() 
{
    int n, count=0;
    cout <<"Enter a number: ";
    cin >> n;
    while(n>0) {
        count ++;
        n/=10;
    }
    cout << count;
}  */
/*8.Revers number #include <iostream>
using namespace std;
int main()
{
    int n, rev=0;
    cout <<"Enter a number: ";
    cin >> n;
    while(n>0)
    {
        rev = rev*10 + n%10;
        n/=10;
    }
    cout << rev;
} */
/* 9. Check number is palindrome or not #include <iostream>
using namespace std;
int main() 
{
    int n, rev=0, temp;
    cout <<"Enter a number: ";
    cin >> n;
    temp=n;
    while(n>0) {
        rev = rev*10 + n%10;
        n/=10;
    }
    cout <<(rev==temp? "Palindrome" : "NotPalindrome");
}  */
/* Factorial number#include <iostream>
using namespace std;
int main() 
{
    int n, fact=1;
    cout <<"Enter a number: ";
    cin >> n;
    while(n>0)
    {
        fact *= n;
        n--;
    }
    cout <<fact;
}  */
/* Count the number of 1's binary representation#include <iostream>
using namespace std;
int main()
{
    int n, count=0;
    cout <<"Enter a number: ";
    cin >> n;
    while(n>0)
    {
        count += n%2;
        n/=2;

    }
    cout << count;

}  */

/* 12 sum of digits #include <iostream>
using namespace std;
int main() 
{
    int n, sum;
    cout <<"Enter a number: ";
    cin >> n;
    while(n>=10)
    {
        sum = 0;
        while(n>0) {
            sum += n%10;
            n/=10;
        }
        n=sum;
    }
    cout << n;
}  */
/* 13. all prime numbers#include <iostream>
using namespace std;
int main()
{
    int n, i=2;
    cout <<"Enter a number: ";
    cin >> n;
    while(i<=n) {
        int j=2, flag = 1;
        while(j*j<=i) {
            if(i%j ==0) {
                flag =0;
                break;
            }
            j++;
        }
        if(flag)
        cout << i <<" ";
        i++;
    }
}  */
/* 14. GCDof two numbers#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout <<"Enter of two numbers: ";
    cin >>a >> b;
    while(a!=b) {
        if(a>b)
         a=a-b;
        else  
          b=b-a; 
    }
    cout << a;
}  */
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout <<"Enter a decimal number: ";
    cin >> n;
    while(n>0) {
        cout <<(n%2);
        n/=2;
    }

}

