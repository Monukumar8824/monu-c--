#include <iostream>
using namespace std;

float add(float a, float b) {
    return a + b;
}
float sub(float a, float b) {
    return a - b;
}
float mul(float a, float b) {
    return a * b;
}
float div(float a, float b) {
    return a / b;
}

int main()
{
   float a,b;
   
   cout <<"Enter the two number";
   cin >> a >> b;
   
   cout <<"Addition: "<< add(a,b) << endl;
   cout <<"Substraction: "<< sub(a,b) << endl;
   cout <<"Multiply: "<< mul(a,b) << endl;
   cout <<"Division: "<< div(a,b) << endl;
 
   return 0;
   

}
