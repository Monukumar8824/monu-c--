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
}  */
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
/* 6.#include<iostream>
using namespace std;
int main() {

    int n;
    cout <<"Enter the number: ";
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++) {
            cout <<"* ";
        }
        cout <<endl;
    }
}  */
/* 7.#include <iostream>
using namespace std;
int main() 
{
    for(int i=1; i<=3; i++) {
        for(int j=1; j<=i; j++)
        {
             cout << j;
        }
        cout <<endl;
    }
}  */
/* 8.#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    for(int i=n; i<=n; i--)
    {
        for(int j=1; j<=i; j--) {
            cout <<"*";

        }
        cout << endl;
    }
}  */
/* 10.#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) {
            cout <<"*";

        }
        cout << endl;
    }
}  */
/* 12.#include <iostream.
using namespace std;
int main() {
int n=3;
    for(int i=1; i<=n; i++) 
    {
        for(int j=1; j<=i; j++) 
        {
        cout <<"*";

        }
        cout << endl;
    }
        for(int i=n-1; i>=1; i--)
        {
        for(int j=1; j<=i; j++) 
        {
        cout <<"*";
        }
        cout << endl;
        }
}  */
/*14.#include <iostream>
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
        for(int k=1; k<=2*i-1; k++)
        {
            cout <<"*";
        }
        cout << endl;
    }
}  */
/*16. #include <iostream>
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
}  */
#include <iostream>
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
}