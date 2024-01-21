#include <iostream>
using namespace std;

int main(){
    // int n=5;
    // for (int i=1; i<=5; i+=1){
    //     cout<<i<<endl;
    // }

    // int n;
    // cout<<"Enter Table number : "<<endl;
    // cin>>n;
    // for (int i=1; i<11; i+=1){
    //     cout<<n<<"*"<<i<<"="<<n*i<<endl;
    // }

    int n;
    cin>>n;
    for (int i=2; i<n; i+=1){
        if (n%i==0){
            cout<<n<<" Is not prime";
            return 0;
        }          
    }cout<<n<<" is Prime";
}