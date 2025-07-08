/*6. Print numbers from 1 to N using ++ only (input: int N)

7. Print numbers from N to 1 using -- only (input: int N)

8. Count total digits in a number using n /= 10 and a counter with ++

9. Reverse a number using only decrement-based loop

10. Print ASCII values of characters from 'A' to 'Z' using increment

11. Find sum of odd numbers from 1 to N using ++

12. Count digits that are divisible by 2 in a number

13. Print digits of a number in reverse using only decrement counter and % operator

14. Convert lowercase to uppercase using ASCII and ++ operator logic

15. Check if a number is a palindrome using increment/decrement
16. Print all prime numbers up to N using ++ only

17. Given N, print Fibonacci sequence using only ++ operators

18. Count the number of steps to reduce a number to 1 using:

if even: divide by 2
if odd: subtract 1
Use counter with ++
19. Given a string, count total vowels using loop and increment only

20. Find factorial of a number using decrementing loop (--)*/
// print 1 to N number
/*#include <iostream>
using namespace std;

int main() {
    int n, i = 1;

    cout <<"Enter the number:- ";
    cin >> n;
    while(i <= n) {
        cout << i <<" ";
        i++;
    }
} */

// N to 1 print numbers
/*#include <iostream>
using namespace std;

int main()
{
   int num, i=1;

   cout<<"Enter the number:-";
   cin >> num;
   while(num >=1)
   {
    cout << num <<" ";
    num--;
   }

}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cout <<"Enter the number:- ";
    cin >> num;
    while(num>0) {
        num /= 10;
        count++;
    }
    cout << count;
} */
/*#include <iostream>
using namespace std;

int main()
{
    int num, rev=0;
    cout <<"Enter the number:- ";
    cin >> num;
    while(num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    cout << rev;
}*/
/*#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    while (ch <= 'Z') {
        cout << ch <<" : " << int(ch) <<endl;
        ch++;
    }
}*/
/*#include <iostream>
using namespace std;
 int main()
 {
    int num,sum = 0, i=1;
    cout<<"Enter the number:- ";
    cin >> num;

    while(i<=num) {
        if(i % 2 != 0)
        sum += i;
        i++;
    }
    cout << sum;
 } */

/*#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cout <<"Enter the number:-";
    cin >> num;
    while(num>0)
    {
        if((num%10) % 2 == 0) 
        count++;
        num /= 10;
    }
    cout << count;
}
*/
/*#include <iostream>
using namespace std;

int main()
{
    int num;
    cout <<"Enter the number:- ";
    cin >> num;
    while(num>0) {
        cout << num % 10 << " ";
        num /= 10;
    }
}*/
/*#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    while (ch <= 'z') {
        cout << ch << " -> "<< char(ch - 32) << endl;
        ch++;
    }
} */
/*#include<iostream>
using namespace std;

int main()
{
    int num, rev = 0, original;
    cout <<"Enter the number:- ";
    cin >> num;
    original = num;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    cout << (rev == original ? "Palindrome" : "Not Palindrome");
} */
/*#include<iostream>
using namespace std;

int main()
{
    int num, a=0, b=1, c, i=1;
    cout<<"Enter the number:- ";
    cin >> num;
    cout << a <<" " << b << " ";
    while(i<= num-2)
    {
        c = a + b;
        cout << c <<" ";
        a = b;
        b = c;
        i++;
    }
} */
/*#include<iostream>
using namespace std;

int main()
{
    int num, steps = 0;
    cout <<"Enter the number:-";
    cin >> num;
    while ( num > 1) {
        if( num % 2 == 0) 
        num /= 2;
        else
        num -= 1;
        steps++;
    }
    cout << steps;
} */
/*#include<iostream>
using namespace std;

int main()
{
    string str;
    cout <<"Enter the character:- ";
    cin >> str;
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        count++;
        i++;
    }
    cout << count;
} */
/*#include <iostream>
using namespace std;

int main()
{
    int num,fact = 1;
    cout <<"Enter the number:- ";
    cin >>num;
    while (num > 0) {
        fact *= num;
        num--;

    }
    cout << fact;
} */
#include<iostream>
using namespace std;

int main() 
{
    int num, i = 2;
    cout <<"Enter the number:- ";
    cin >> num;
    while (i<=num)
    {
        int j = 2, flag = 1;
        while (j * j <= i) 
        {
            if(i % j == 0) 
            {
                flag = 0;
                break;
            }
            j++;
        }
        if (flag) 
        cout << i << " ";
        i++;
    }
}