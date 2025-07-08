/*#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40};
    for(int i=0; i<4; i++) {
        cout << arr[i] << " ";
    }
} //Output:- 10 20 30 40 */

/*#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
for(int i = 4; i >= 0; i--)
{ cout << arr[i] << " ";
}
} //Output:- 5 4 3 2 1  */
 /*#include <iostream>
 using namespace std;
 int main() {
    int arr[] = {5, 10, 15};
for(int i = 0; i < 3; i++) {
    arr[i] += 5;
    cout << arr[i] << " ";
}
 } // Output:- 10 15 20 */
/*#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1};
for(int i = 0; i < 5; i++) 
{
    cout << arr[i] << " ";
}
}  //Output:- 1 0 0 0 0  */
/* #include <iostream>
using namespace std;
int main() {
    int arr[] = {2, 4, 6, 8};
    int sum = 0;
    for(int i = 0; i < 4; i++) {
    if(arr[i] % 4 == 0) 
    sum += arr[i];
    cout << sum;
}
}  //Output:- 04412  */

/*#include <iostream>
using namespace std;

bool isSorted(int arr[], int num) {
    for(int i = 0; i < num - 1; i++)
        if(arr[i] > arr[i + 1])
            return false;
    return true;
}

int main() {
    int num[5];
    cout <<"Enter 5 numbers; " <<endl;
    for(int i=0; i<5; ++i) {
        cin >> num[i];
    }
    if(isSorted(arr, num))
        cout << "Array is sorted." << endl;
    else
        cout << "Array is not sorted." << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array in reverse: ";
    for(int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int max = arr[0], min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n], even = 0, odd = 0;
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Total even elements: " << even << endl;
    cout << "Total odd elements: " << odd << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n], sum = 0;
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    double avg = (double)sum / n;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    return 0;
}  */
/*#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int first = INT_MIN, second = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if(second == INT_MIN)
        cout << "No second largest element found." << endl;
    else
        cout << "Second largest element: " << second << endl;

    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int n, key, found = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index " << i << endl;
            found = 1;
            break;
        }
    }
    if(!found)
        cout << "Element not found in the array." << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[100]; // large enough for insertion
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int pos, elem;
    cout << "Enter position to insert (0 to " << n << "): ";
    cin >> pos;
    cout << "Enter element to insert: ";
    cin >> elem;

    if(pos < 0 || pos > n) {
        cout << "Invalid position." << endl;
    } else {
        for(int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = elem;
        n++;
        cout << "Array after insertion: ";
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[100]; // large enough for deletion
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int pos;
    cout << "Enter position to delete (0 to " << n - 1 << "): ";
    cin >> pos;

    if(pos < 0 || pos >= n) {
        cout << "Invalid position." << endl;
    } else {
        for(int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        cout << "Array after deletion: ";
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n], copy[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
        copy[i] = arr[i];

    cout << "Copied array: ";
    for(int i = 0; i < n; i++)
        cout << copy[i] << " ";
    cout << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int n, num, count = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter number to find frequency: ";
    cin >> num;

    for(int i = 0; i < n; i++) {
        if(arr[i] == num)
            count++;
    }
    cout << "Frequency of " << num << " is: " << count << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n) {
    int i = 0, j = n - 1;
    while(i < j) {
        if(arr[i] != arr[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = 5;
    if(isPalindrome(arr, n))
        cout << "Array is a palindrome." << endl;
    else
        cout << "Array is not a palindrome." << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5};
    int n = 7;
    cout << "Duplicate elements: ";
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n1 = 3, n2 = 3;
    int merged[n1 + n2];

    for(int i = 0; i < n1; i++)
        merged[i] = arr1[i];
    for(int i = 0; i < n2; i++)
        merged[n1 + i] = arr2[i];

    cout << "Merged array: ";
    for(int i = 0; i < n1 + n2; i++)
        cout << merged[i] << " ";
    cout << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5, count = 0;

    for(int i = 0; i < n; i++)
        if(arr[i] != 0)
            arr[count++] = arr[i];

    while(count < n)
        arr[count++] = 0;

    cout << "Array after shifting zeroes: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3};
    int n = 7, maxCount = 0, freqElement;

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++)
            if(arr[i] == arr[j])
                count++;
        if(count > maxCount) {
            maxCount = count;
            freqElement = arr[i];
        }
    }

    cout << "Most frequent element: " << freqElement << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7, uniqueCount = 0;

    for(int i = 0; i < n; i++) {
        bool isUnique = true;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique)
            uniqueCount++;
    }

    cout << "Total unique elements: " << uniqueCount << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;

    int temp[n], j = 0;
    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for(int k = 0; k < j; k++) {
            if(arr[i] == temp[k]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate)
            temp[j++] = arr[i];
    }

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < j; i++)
        cout << temp[i] << " ";
    cout << endl;
    return 0;
}  */
 /*#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, evenSum = 0, oddSum = 0;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    cout << "Sum at even indices: " << evenSum << endl;
    cout << "Sum at odd indices: " << oddSum << endl;
    return 0;
}  */
/*#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, -3, 7, -1, 0, -6};
    int n = 6;

    for(int i = 0; i < n; i++) {
        if(arr[i] < 0)
            arr[i] = 0;
    }

    cout << "Array after replacing negatives with 0: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}  */




















