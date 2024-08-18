#include <iostream>
using namespace std;

int main(){
    int sum=0;
    int n;
    cout<<"Enter Value of n"<<endl;
    cin>>n;
    for (int i=0; i<=n; i+=1){
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}