#include <iostream>
using namespace std;

//conditonals
// int main(){
//     //declare integer type variable
//     int score;
//     cout<<"Enter the score : "<<endl;
//     // take input into score variable
//     cin>>score;
//     // if condition
//     if(score<300){
//         cout<<"India Wins"<<endl;
//     }  
//     else{
//     cout<<"Australia Wins"<<endl;
//     }
// }

// int main(){
//     int age;
//     cout<<"Enter your age"<<endl;
//     cin>>age;
//     if (age<18){
//         cout<<"You can't vote"<<endl;
//     }
//     else{
//         cout<<"You can vote"<<endl;
//     }
// }


int main() {
    int marks;
    cout<<"Enter your marks : ";
    cin >> marks;

    if (marks >= 90) {
        cout << "A Grade" << endl;
    } else if (marks >= 80) {
        cout << "B Grade" << endl;
    } else if (marks >= 60) {
        cout << "C Grade" << endl;
    } else if (marks >= 40) {
        cout << "D Grade" << endl;
    } else {
        cout << "Fail" << endl;
    }
    // cin.get(); // Add this line to keep the console window open
    return 0;
}

