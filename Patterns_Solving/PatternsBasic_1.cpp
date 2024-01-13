#include <iostream>
using namespace std;
int main(){
    // for (int row =0; row<3; row+=1){
    //     for(int col=0; col<5;col+=1){
    //         cout<<"* ";
    //     }
    // cout<<endl;
    // }


    int row;
    int col;
    cout<<"Enter Row"<<"and Enter Columns"<<endl;
    cin>>row;
    cin>>col;
    for (int i=0;i<row;i=i+1){
        for (int j=0; j<col; j=j+1){
            cout<<"* ";
        }
    cout<<endl;
    }
}