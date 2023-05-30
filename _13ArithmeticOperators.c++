#include <iostream>
using namespace std;
int main() {
    //binary operators
    int a = 10;
    int b = 20;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " % " << b << " = " << a % b << endl;
    //unary operators
    
    cout << a++ << endl;
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;
    return 0;

}