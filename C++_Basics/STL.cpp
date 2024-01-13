#include <bits/stdc++.h>
using namespace std;

// void print(){
//     cout<<"Hello' Namaste"<<endl;
// }

// int sum(int a, int b){
//     return a+b;
// }

// int main(){
//     print();
//     int s= sum(5,6);
//     cout<<"Sum is "<<s;
// }

void explainPair(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>> q={1,{3,4}};
    cout<<q.first<<q.second.second<<q.second.first<<endl;

    pair<int,int> arr[]={{1,2},{3,4},{4,5}};
    cout<<arr[1].second<<endl;
}
int main(){
    explainPair();
    return 0;
}

