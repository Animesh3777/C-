#include <bits/stdc++.h>
using namespace std;

int main() {
    // Commented out code for integer and long data types
    // int x = 10;
    // long y = 15;
    // cout << "Enter y value: ";
    // cin >> y;
    // cout << "Value of y is: " << y << endl;

    // long long z = 150000000000000;
    // cout << "Value of z is: " << z << endl;

    // Float and double data types
    // float x = 5.6;
    // float y = 5;
    // double z = 10;

    // Uncommented code for string input and output using getline
    // string s1;
    // string s2;

    // Note: cin >> s1 >> s2; would read only one word into s1 and s2 respectively.
    // If you want to read the entire line, use getline(cin, variable);
    // cout << "Enter s1 and s2 separated by space: ";
    // cin >> s1 >> s2;

    // cout << "s1: " << s1 << " s2: " << s2 << endl;

    // string str;
    // getline(cin,str);
    // cout<<str;
    // return 0;

    //char
    // char ch;
    // cin>>ch;
    // cout<<ch<<endl;

    // int age;
    // cout<<"Enter your age"<<endl;
    // cin>>age;
    // if (age>=18){
    //     cout<<"You are an adult";
    // }
    // else if (age<18){
    //     cout<<"You are not an adult";
    // }
    // return 0;

    int marks;
    cout<<"Enter marks"<<endl;
    cin>>marks;
    if(marks<40){
        cout<<"F Grade"<<endl;
    }
        else if (marks<=44 ){
        cout<<"E Grade"<<endl;
    }
    else if (marks<=49 ){
        cout<<"D Grade"<<endl;
    } 
    else if (marks<=59 ){
        cout<<"C Grade"<<endl;
    }
    else if (marks<=79 ){
        cout<<"B Grade"<<endl;
    }   
    else 
    cout<<"A Grade"<<endl;
    return 0;
}      