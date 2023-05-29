#include <iostream>
using namespace std;

int main()
{
    // int pocketmoney=3000;
    // for(int date=1;date<=30;date++){
    //     if (date%2==0){
    //         continue;//skip to next step
    //     }
    //     if(pocketmoney==0){
    //         break;//terminates the loop
    //     }
    //     cout<<"go out today "<<date<<endl;
    //     pocketmoney=pocketmoney-500;

    // }

    int m;
    cout<<"value of m : "<<endl;
    cin>>m;
    for (int n=1;n<=m;n++){
        if(n%3==0){
            continue;
        }
        else{
            cout<<n<<" ";
        }
    }
}