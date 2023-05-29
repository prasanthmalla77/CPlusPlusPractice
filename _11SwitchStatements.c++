#include <iostream>
using namespace std;

int main(){
    char button;
    cout<<"value of button : ";
    cin>>button;
    switch(button){
        case 'a':
            cout<<"hello I am A"<<endl; 
        break;
        case 'b':
            cout<<"hello I am  B"<<endl;  
        break;
        default:
        cout<<"bye bye"<<endl;     
    }
    return 0;
}