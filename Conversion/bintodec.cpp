#include <iostream>
#include <string>
using namespace std;
int binarytoDecimal(string binary);
    
    
int main () {
    int binary;
      cout <<"Enter the binary number: ";
      cin >> binary;
      int binarytoDecimal(string binary)
      int decimal = 0;
    int base = 1
    for(int i=binary.length()-1; i>=0; i--)
    {
        if(binary[i]=='1')  {
        decimal += base;
        base *= 2;
        
        }
        return decimal;
    }
    }


