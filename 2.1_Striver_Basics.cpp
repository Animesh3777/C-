#include <bits/stdc++.h>
using namespace std;

// int main() {
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

    // If/Else Statement

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

    // int marks;
    // cout<<"Enter marks"<<endl;
    // cin>>marks;
    // if(marks<40){
    //     cout<<"F Grade"<<endl;
    // }
    //     else if (marks<=44 ){
    //     cout<<"E Grade"<<endl;
    // }
    // else if (marks<=49 ){
    //     cout<<"D Grade"<<endl;
    // } 
    // else if (marks<=59 ){
    //     cout<<"C Grade"<<endl;
    // }
    // else if (marks<=79 ){
    //     cout<<"B Grade"<<endl;
    // }   
    // else 
    // cout<<"A Grade"<<endl;
    // return 0;

    // int age;
    // cout<<"Enter your age : "<<endl;
    // cin>>age;
    // if (age<18){
    //     cout<<"Not eligible for job";
    // }
    // else if (age<=57)
    // {
    //     cout<<"Eligible for job";
    //     if(age>=55){
    //         cout<<",but retirement soon";
    //     }
    // }
    // else
    // cout<<"Retirement line";
    

    // Switch statement
    // int day;
    // cout<<"Enter day in number"<<endl;
    // cin>>day;
    // switch (day)
    // {
    // case 1:
    //     cout<<"Monday";
    //     break;   
    // case 2:
    //     cout<<"Tuesday";
    //     break;
    // case 3:
    //     cout<<"Wednesday";
    //     break;
    // case 4:
    //     cout<<"Thursday";
    //     break;
    // case 5:
    //     cout<<"Friday";
    //     break;
    // case 6:
    //     cout<<"Saturday";
    //     break;
    // case 7:
    //     cout<<"Sunday";
    //     break;
    // default:
    //     cout<<"Inavlid";
    //     break;
    // }

    // Array 1D
    // int arr[5];
    // cin >>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5];
    // cout<<arr[3];
    // return 0;

    // 2D Array
    // int arr[3][5];
    // arr[1][3]=70;
    // cout << arr[1] [3];
    // return 0;

    // Strings
    // string s = "Animesh";
    // // cout<<s[3];
    // int len=s.size();
    // cout<<s[len-1]; 
    // return 0;

    // For Loop
    // int i;
    // for (i=1;i<=10;i=i+1)
    //     cout<<"Animesh "<<i<<endl;
    
    // cout<<i<<endl;

    // While Loop
    // int i=1;
    // while(i<=5) {
    //     cout<<"Animesh"<<i<<endl;
    //     i=i+1;
    // }
    // return 0;

    // Do While
    //     int i=2;
    // do {
    // cout<<"Animesh"<<i<<endl;
    //     i=i+1;
    // } 
    // while(i<=1);
    // cout<<i<<endl;
    // return 0;

    // Function

// }      
    // void printName(string name){
    //     cout<<"Hey "<<name<<endl;
    // }
    // int main(){
    //     string name;
    //     cin>>name;
    //     printName(name);

    //     string name2;

    //     cin>>name2;
    //     printName(name2);

    //     return 0;
    // }

    // pass by value
//     void doSomething(int & num){
//         cout<<num<<endl;
//         num+=5;
//         cout<<num<<endl;
//         num+=5;
//         cout<<num<<endl;
    

// }
//     int main(){
//         int num=5;
//         doSomething(num);
//         cout<<num<<endl;
//         return 0;
//     }

        // pass by refrence
        
        void doSomething( int arr[], int n){
            arr[0]+=100;
            cout<<"Value inside function"<<arr[0]<<endl;
        }
        int main(){
            int n=5;
            int arr[5];
            for(int i=0;i<=n-1;i=i+1){
                cin>>arr[i];
            }
            doSomething(arr,n);
            cout<<"Value inside int main:"<<arr[0]<<endl;
            return 0;
        }

