#include <iostream>
using namespace std;

int main()
{
    int arr[100], size, val, pos;

    cout <<"Enter the size of an array: ";
    cin >> size;
    cout <<"Enter " << size << " elements: \n";
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout <<"Enter the value to insert: ";
    cin >> val;
    cout <<"Enter the position for insert value: ";
    cin >> pos;

    if(pos<0 || pos>size) {
        cout <<"Invalid position.\n";
        return 0;
    } 

    int temp = val;
    for(int i=pos; i<=size+1; i++) {
        int temp1 = arr[i];
        arr[i] = temp;
        temp = temp1;
    }
    cout <<"\nArray after insertion:\n";
    for(int i=0; i<=size; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
    return 0;
}