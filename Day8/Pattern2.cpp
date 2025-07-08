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
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    for(int i=n; i<=n; i--)
    {
        for(int j=1; j<=i; j++) {
            cout <<"*";

        }
        cout << endl;
    }
}