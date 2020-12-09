#include<iostream>

using namespace std;

int main() {
    int age;
    cout<< "Tell me your age: "<< endl;
    cin>>age;
    /******selection control structure
     * if-else and else-if ladder
     * *****/
    // if (age<18)
    // {
    //     cout<< "You are not allowed to my party"<< endl;
    // } else if(age == 18) {
    //     cout<< "You are a kid and you will get a kid pass to the party"<< endl;
    // } else {
    //     cout<<"You can come to the party"<< endl;
    // }


    /****switch case statement*****/

    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;
    case 22:
        cout<<"You are 22";
        break;
    case 2: 
        cout<< "You are 2";
        break;
    default:
        cout<<"no special cases"<< endl;
        break;
    }
    
    return 0;
}