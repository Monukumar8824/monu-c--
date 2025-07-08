/* 6.Array in reversed print 
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout <<"Enter size of an array: ";
    cin >>size;
    int arr[n];
    cout <<"Enter "<< size <<" "  << "elements: ";
    for(int i=0; i<size; i++)
    cin >> arr[i];
    for(int i = size - 1; i >= 0; i--) {
    cout << arr[i] << " ";
}
     cout << endl;
}  */
/*Find max and min element in array 
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout <<"Enter a size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i] > max)max = arr[i];
        if(arr[i] < min)min = arr[i];

    }
    cout <<"Max: " << max << ", Min: " << min;
    return 0;

}  */
/*8.Count total even and odd number 
#include <iostream>
using namespace std;
int main()
{
    int size, even=0, odd=0;
    cout <<"Enter size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++) {
        cin >> arr[i];
        if(arr[i]%2==0)
        even++;
        else
         odd++;
    }
    cout <<"Even: "<< even <<", Odd: "<< odd;
    return 0;
}  */
/* 9. Sum and average 
#include <iostream>
using namespace std;
int main()
{
    int size, sum=0;
    cout <<"Enter size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    double avg = (double)sum/size;
    cout <<"Sum: " << sum <<", Average: "<< avg;
    return 0;
}  */
/* 10.Find second largest
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int size;
    cout <<"Enter size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    int first = INT_MIN, second = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i] >first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) 
        {
            second = arr[i];
        }
    }
    cout <<"Second Largest: "<< second;
    return 0;
}  */
/* 11.Linear search 
#include <iostream>
using namespace std;
int main()
{
    int size,element;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
    cout <<"Enter number for search: ";
    cin >> element;
    bool found = false;
    for(int i=0; i<size; i++)
    {
        if(arr[i] == element)
        {
            cout <<"Found at index: "<< i;
            found = true;
            break;
        }
    }
    if(!found) 
      cout <<"Not found";
      return 0;
}  */
/* 12. Inser at specific index
#include <iostream>
using namespace std;
int main()
{
    int size, pos, value;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];

    }
    cout <<"Enter position and value:  ";
    cin >> pos >> value;
    for(int i=1; i>pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    size++;
    for(int i=0; i<size; i++)
    {
        cout << arr[i] <<" ";
        return 0;
    }

}   */
/*13. Delete at specific index
#include <iostream>
using namespace std;
int main()
{
    int size, pos;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];

    }
    cout <<"Enter position :  ";
    cin >> pos;
    for(int i=pos; i<size-1; i--) {
        arr[i] = arr[i+1];
    }
   
    size++;
    for(int i=0; i<size; i++)
    {
        cout << arr[i] <<" ";
        return 0;
    }

}   */
/* 14. Copy one array to another
#include <iostream>
using namespace std;
int main() {
    int size;
    cout <<"enter the size of an array: ";
    cin >> size;
    int arr1[100], arr2[100];
    for(int i=0; i<size; i++) {
    cin >> arr1[i];
  }
    for(int i=0; i<size; i++) {
     arr2[i] = arr1[i];

}
    for(int i=0; i<size; i++) 
    {
    cout << arr2[i] << " ";
}
    return 0;
}  */
/* 15.  Count frequency of a given number

#include <iostream>
using namespace std;
int main() {
    int size, element, count = 0;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++) cin >> arr[i];
    cout << "Enter number to count: ";
    cin >> element;
    for(int i=0; i<size; i++) {
        if(arr[i] == element) count++;
    }
    cout << "Frequency: " << count;
    return 0;
}  */
/* 16. Array sorted or not 
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
    bool sorted = true;;
    for(int i=0; i<size-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            sorted = false;
            break;
        }
    }
    if(sorted)
     cout <<"Array is sorted";
    else
      cout <<"Array is not sorted";
    return 0;
}  */
/* 17.Array is palindrome or not 
#include <iostream>
using namespace std;
int  main()
{
    int size;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    bool palindrome = true;
    for(int i=0; i<size/2; i++)
    {
        if(arr[i] != arr[size-1-i])
        {
            palindrome = false;
            break;
        }
    }
    if(palindrome)
     cout <<"Array is palindrome";
    else 
      cout <<"Array is not palindrome";
    return 0;
}  */
/*18. Duplicate element in array 
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout <<"Duplicate element: ";
    for(int i=0; i<size; i++) {
         for(int j=i+1; j<size; j++) {
            if(arr[i] == arr[j])
            {
                cout << arr[i] <<" ";
                break;
            }
         }
    }
    return 0;
}  */
/* 19. Merge two array into one
 #include <iostream>
using namespace std;
int main()
{
    int size1, size2;
    cout <<"Enter the size of an array: ";
    cin >> size1;
    int arr1[100];
    for(int i=0; i<size1; i++)
    {
       cin >> arr1[i];
    }
    cin >> size2;
    int arr2[100];
    for(int i=0; i<size2; i++)
    {
        cin >> arr2[i];
    }
    int merged[200];
    for(int i=0; i<size1; i++)
    {
        merged[i] = arr1[i];
    }
    for(int i=0; i<size2; i++)
    {
        merged[size1+i] = arr2[i];
    }
    for(int i=0; i<size1+size2; i++)
    {
        cout << merged[i] <<" ";

    }
    return 0;

}  */
/*  20.Shift all zero to the end
#include <iostream>
using namespace std;
int main() {
    int size, count = 0;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    } 

    for(int i=0; i<size; i++) {
        if(arr[i] != 0) {
            cout << arr[i] << " ";
            count++;
        }
    }
    for(int i=0; i<size-count; i++) {
        cout << 0 << " ";
    }
    return 0;
}  */
/*  21. Most frequent element
#include <iostream>
using namespace std;
int main() {
    int size, maxCount = 0, freqElement;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    } 

    for(int i=0; i<size; i++) {
        int count = 0;
        for(int j=0; j<size; j++) {
            if(arr[i] == arr[j]) count++;
        }
        if(count > maxCount) {
            maxCount = count;
            freqElement = arr[i];
        }
    }
    cout << "Most frequent: " << freqElement << " (appears " << maxCount << " times)";
    return 0;
}  */
/* 22. Count total unique element
#include <iostream>
using namespace std;
int main() {
    int size, uniqueCount = 0;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++) cin >> arr[i];

    for(int i=0; i<size; i++) {
        bool isUnique = true;
        for(int j=0; j<size; j++) {
            if(arr[i] == arr[j] && i != j) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) uniqueCount++;
    }
    cout << "Total unique elements: " << uniqueCount;
    return 0;
}  */
/* 23. Remove duplicate element
#include <iostream>
using namespace std;
int main() {
    int size;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++) cin >> arr[i];

    cout << "After remove duplicates element: ";
    for(int i=0; i<size; i++) {
        bool duplicate = false;
        for(int j=0; j<i; j++) {
            if(arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }
        if(!duplicate) cout << arr[i] << " ";
    }
    return 0;
}  */
/* 24. Find even oand odd index of sum
#include <iostream>
using namespace std;
int main() {
    int size, evenSum = 0, oddSum = 0;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++)
    { cin >> arr[i];
}
    for(int i=0; i<size; i++) {
        if(i%2 == 0) evenSum += arr[i];
        else oddSum += arr[i];
    }
    cout << "Even index sum: " << evenSum << endl;
    cout << "Odd index sum: " << oddSum;
    return 0;
}  */
/* 25. Replace every negative element  with 0
 #include <iostream>
using namespace std;
int main() {
    int size;
    cout <<"Enter the size of an array: ";
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++)
    { cin >> arr[i];
    }
    for(int i=0; i<size; i++) {
        if(arr[i] < 0) arr[i] = 0;
    }

    for(int i=0; i<size; i++) cout << arr[i] << " ";
    return 0;
}   */
#include <iostream>
using namespace std;
int main()
{
    
}









