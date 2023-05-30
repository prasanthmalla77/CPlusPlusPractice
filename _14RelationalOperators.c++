#include <iostream>
using namespace std;
int main() {
    //==, !=, <, >, <=, >=
    /*int a = 10;
    int b = 20;
    cout << a << " == " << b << " = " << (a == b) << endl;
    cout << a << " != " << b << " = " << (a != b) << endl;
    cout << a << " < " << b << " = " << (a < b) << endl;
    cout << a << " > " << b << " = " << (a > b) << endl;
    cout << a << " <= " << b << " = " << (a <= b) << endl;
    cout << a << " >= " << b << " = " << (a >= b) << endl;
    return 0;*/

    // assignment: input a number n andd tell whether it is equal to, less or greater than 10.
    int n;
    cout<<"enter the value of n : "<<endl;
    cin>>n;
    if(n==10){
        cout<<"n is equal to 10"<<endl;
    }
    if(n<10){
        cout<<"n is less than 10"<<endl;
    }
    if(n>10){
        cout<<"n is greater than 10"<<endl;
    }


    
}