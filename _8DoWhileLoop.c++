#include  <iostream>
using namespace std;

int main(){
    int n;
    //it runs the lloop atleast once this is the differece between while and do while
    do{
        cout<<n<<endl;
        cout<<"value of n :";
        cin>>n;
    }while(n>0);
}