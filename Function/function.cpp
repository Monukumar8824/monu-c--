/*void hello() {
    cout <<"Hi ";

}
int main() {
    hello();
    hello();
    return 0;
}
    Output:- Hi, Hi*/

/*int add(int a, int b) {
    return a + b;
}
int main() {
    cout << add(2,3) * add(1,1);
    return 0;
} 
Output:- 10    */

/*
int fun(int x) {
    if(x==0)
    return 0;
    return x + fun(x-1);
}
int main() {
    cout << fun(3);
    return 0;
} 
Output:- 6    */

/*4. int calc(int x) {
    return x * 2;
}
int main() {
    int x = 5;
    cout << calc(x);
    return 0;
}
Output:-10 */
 /*5.void display(int x =10) {
    cout << x;
    int main() {
        display();
        return 0;
    }
}  
Output:- 10 */
 /* 6.void fun(int a) {
    cout << a << " ";
}      
int main() {
    int a = 5;
    fun(++a);
    fun(a++);
    return 0;
}
 Output:- 6,6 */
 /*7.
 int square(int x) {
    return x * x;
 }
 int main() {
    cout << square(3+1);
    return 0;
 }
Output:- 8 */
/*8.
int mystery(int a, int b = 10) {
    return a * b;
}
int main() {
    cout << mystery(2);
    return 0;
}
Output:- 20  */
/*9.
int val(int &x) {
    x += 10;
    return x;
}
int main() {
    int x = 5; cout << val(x) <<" "<< x;
    return 0;
}
Output:- 15  */
/*10.
int fun(int x) {
    return x > 0 ? x + fun(x-2) : 0;
}
int main() {
    cout << fun(5);
    return 0;
}
Output:- 8 */

/*#include<iostream>
using namespace std;

    int fact(int n) 
   
    {
        int fact = 1;
        for(int i=1; i<=n; i++) {
            fact *= n;
        }
        return fact ;
    }
    int main() {
        int n;
        cout <<"Enter the number: ";
        cin >> n;
        cout << "Factorial = " << fact(n) << endl;
        return 0;
    }  */
   /*#include <iostream>
   using namespace std;

   bool isEven(int n) {
    return n%2 == 0;
   }
   int main() {
    int num;
     cout<<"Enter the number";
     cin >> num;

     if(isEven(num))
        cout << num << " is Even." << endl;
    else
      cout << num << " is Odd" << endl;
    return 0;      
   }  */

/*#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c) {
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}

int main() {
    int a,b,c;
    cout <<"Enter the three number :-";
    cin >>a>>b>>c;
    cout << "Maximum is: " << maxOfThree(a, b, c) << endl;
    return 0;
} */
/*#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    /*if (num == 0) return 1;
    while(num != 0) {
        count++;
        num /= 10;
    } */
   /*while(num) {
    count++;
    num/=10;
   }
    return count;
}

int main() {
    int num;
    cout <<"Enter the number: ";
    cin >> num;
    cout << "Number of digits: " << countDigits(num) << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int sumN(int num) {
    return num * (num + 1) / 2;
}

int main() {
    int num;
    cout <<"Enter the number: ";
    cin >> num;
    cout << "Sum of first " << num << " natural numbers: " << sumN(num) << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int printTable(int num) {
    for(int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {
    int num;
    cout <<"Enter the number: ";
    cin >> num;
    printTable(num);
    return 0;
}  */

/*#include <iostream>
using namespace std;

int sumOfSquares(int num) {
    int sum = 0;
    for(int i = 1; i <= num; i++) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int num;
    cout <<"Enter the number: ";
    cin >> num;
    cout << "Sum of squares up to " << num << " is: " << sumOfSquares(num) << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int rev = 0;
    while(num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int num;
    cout <<"Enter the number: ";
    cin >> num;
    cout << "Reversed number: " << reverseNumber(num) << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int rev = 0;
    while(num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

int main() {
    int num;
    cout <<"Enter the number: ";
    cin >> num;
    if (isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x,y;
    cout <<"Enter the two number: ";
    cin >> x >> y;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapNumbers(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
} */
/*#include <iostream>
using namespace std;

int maxInArray(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[] = {3, 7, 2, 9, 4};
    int size = 5;
    cout << "Maximum in array: " << maxInArray(arr, size) << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    for(int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    reverseArray(arr, size);
    cout << "Reversed array: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    return sum;
}
}

int main() {
    int arr[] = {5, 10, 15, 20};
    int size = 4;
    cout << "Sum of array elements: " << sumArray(arr, size) << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

void countFrequency(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        int count = 1;
        bool visited = false;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                visited = true;
                break;
            }
        }
        if(!visited) {
            for(int k = i + 1; k < size; k++) {
                if(arr[i] == arr[k])
                    count++;
            }
            cout << arr[i] << " occurs " << count << " times." << endl;
        }
    }
}

int main() {
    int arr[] = {2, 3, 2, 4, 3, 5, 2};
    int size = 7;
    countFrequency(arr, size);
    return 0;
} */
/*#include <iostream>
#include <string>
using namespace std;

bool isPalindromeString(string s) {
    int i = 0, j = s.length() - 1;
    while(i < j) {
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    string s = "level";
    if(isPalindromeString(s))
        cout << s << " is a palindrome." << endl;
    else
        cout << s << " is not a palindrome." << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

void toUpperCase(string &s) {
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
}

int main() {
    string s = "hello world";
    toUpperCase(s);
    cout << "Uppercase string: " << s << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = 5;
    selectionSort(arr, size);
    cout << "Sorted array: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}  */
/*#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool areAnagrams(string s1, string s2) {
    if(s1.length() != s2.length()) 
    return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {
    string s1 = "listen";
    string s2 = "silent";
    if(areAnagrams(s1, s2))
        cout << "Strings are anagrams." << endl;
    else
        cout << "Strings are not anagrams." << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

void printAboveAverage(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];
    double avg = (double)sum / size;
    cout << "Elements greater than average (" << avg << "): ";
    for(int i = 0; i < size; i++) {
        if(arr[i] > avg)
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = 5;
    printAboveAverage(arr, size);
    return 0;
}  */
/*#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int size)
{
    int first = INT_MIN, second = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    return second;
}
int main() 
{
    int arr[] ={10,54,34,24,29};
    int size = 5;
     int second = secondLargest(arr,size);
    cout <<"Second Largest:"<< second <<endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++) {
        sum += arr[i];
    }
    return sum;
}

void greaterThanAvg(int arr[], int size)
{
    double avg = sumArray(arr,size)/(double) size;
    cout <<"Average: " << avg <<endl;
    cout <<"Elements greater than average: ";
    for (int i=0; i<size; i++)
    {
        if(arr[i] > avg)
          cout << arr[i] <<" ";
    }
    cout <<endl;
}
int main()
{
    int arr[] = {10,82,89,67,98};
    int size = 5;
    greaterThanAvg(arr, size);
    return 0;
}  */
