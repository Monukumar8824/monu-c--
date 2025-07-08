#include <iostream>
using namespace std;

int fun_add(float x, float y) {
    cout <<"Addition: " <<(x+y) << endl;
}

int fun_sub(float x, float y) {
    cout <<"Substraction: " <<(x-y) << endl;
}

int fun_mul(float x, float y) {
    cout <<"Multiplication: " <<(x*y) <<endl;
}

int fun_div(float x,float y) {
    cout <<"Division: "<<(x/y) << endl;
}

int main() {
    float a,b;

    cout <<"Enter the first number: ";
    cin >> a;
    cout <<"Enter the second number: ";
    cin >> b;
    fun_add(a,b);
    fun_sub(a,b);
    fun_mul(a,b);
    fun_div(a,b);
    return 0;

}