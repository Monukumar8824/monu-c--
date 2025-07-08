#include <iostream>
using namespace std;

int main() 
{
    int arr[100], size, pos;

    cout <<"Enter the size of an array: ";
    cin >> size;
    cout <<"Enter " << size <<"  element:\n";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
    cout <<"Enter the position of the value to delete: ";
    cin >> pos;

    if(pos<0 || pos >=size) {
        cout <<"Invalid position.\n";
        return 0;
    }

    for(int i=pos; i<size-1; i++) {
        arr[i] = arr[i+1];
    }
    size--;
    cout <<"\nArray after deletion:\n";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}