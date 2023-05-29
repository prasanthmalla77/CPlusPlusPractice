#include <iostream>
using namespace std;

int main(){
    int savings;
    cout<<"enter your saving value ";
    cin>>savings;
    string gf1,gf2,gf3;
    cout<<"gf1 name(rich)";
    cin>>gf1;
    cout<<"gf2 name(understanding)";
    cin>>gf2;
    cout<<"gf3 name(poor)";
    cin>>gf3;
    if(savings<5000){
        if(savings>3000){
            cout<<"go to restaurant with "<<gf1;
        }
        else{
            cout<<"muskuni chat chesko"<<gf1;
        }
    }
    else if(5000<savings<10000){
        cout<<"go with "<<gf2;
    }
    else{
        cout<<"go with"<<gf1;
    }
}