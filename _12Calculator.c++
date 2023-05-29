#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"enter the value of m : ";
    cin>>m;
    cout<<"enter the value of n : ";
    cin>>n;
    char button;
    cout<<"select one option: a.Add, b.Sub, c.Multiply, d.Division";
    cin>>button;
    switch(button){
        case 'a':
            cout<<m+n;
            break;
        case 'b':
            cout<<m-n;
            break;
        case 'c':
            cout<<m*n;
            break;
        case 'd':
            cout<<m/n;
            break;
        default:
        cout<<"naku anthe vacchu (LOL)";
        
    }
    
}