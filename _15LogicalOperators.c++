#include <iostream>
using namespace std;
int main() {
    //&&, ||, !
    //&& - AND gives us true if both the statements are true.
    //|| - OR gives us true if one of the statements is true.
    //! - NOT gives us true if the statement is false.
    int a = 10;
    int b = 20;
    cout << (a<b) << " && " << (a>b) << " = " << ((a<b) && (a>b)) << endl;
    cout << (a<b) << " || " << (a>b) << " = " << ((a<b) || (a>b)) << endl;
    cout << a << " ! " << b << " = " << (a != b) << endl;
    //assignment : check whether a number n divisible by 2 and 3.
    int n;
    cout<<"enter the value of n : "<<endl;
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<"n is divisible by 2 and 3"<<endl;
    }
    else if(n%2==0){
        cout<<"n is divisible by 2"<<endl;
    }
    else if(n%3==0){
        cout<<"n is divisible by 3"<<endl;
    }
    else{
        cout<<"n is not divisible by 2 or 3"<<endl;
    }
    return 0;

}