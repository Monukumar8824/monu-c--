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
   int num;

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
