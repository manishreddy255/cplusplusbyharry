#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    // int a = 34;
    // char c = 'c';
    // cout<< "The value of a was"<< a;
    // a = 45;
    // c = '4';
    // cout<< "The value of a is"<< a;
    // // if you don't want to chnage 
    // // use the const key word
    // const int a = 3;
    // // a = 5;// you will get an error as the a is a constant/
    // cout<< a;

    //**************manipulators in c++********
    //manipulators are used in c++ to format data
    // int a = 4, b = 78, c = 123;
    // with setw() you can set the width which you want 
    // cout<< "The value of a is: "<< a<< endl;
    // cout<< "The value of b is: "<< b<< endl;
    // cout<< "The value of c is: "<< c<< endl;

    // cout<< "The value of a is: "<<setw(4)<< a<< endl;
    // cout<< "The value of b is: "<< setw(4) << b << endl;
    // cout<< "The value of c is: "<< setw(4) << c<< endl;

    /*********
     * operator precedence in c++
     * ********/
    int a = 3, b = 4;
    int c= a*5+b;
    cout<< c;

    return 0;
}