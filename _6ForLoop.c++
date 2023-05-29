#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int sum=0;
    cout<<"sum of "<<n<<" numbers:"<<endl;    
    for(int i=1;i<=n;i++){
        int x;
        cout<<"enter the value of x"<<i<<" ";
        cin>>x;       
        sum=sum+x;
    }
   cout<<sum;


}