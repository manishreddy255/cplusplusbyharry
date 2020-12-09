
// there are two types of hseader files
//1.system header files: it comes with the compiler
#include<iostream>
// 2. user defined header files : it is written by the programmer 
// #include "this.h"
// this will produce error if file is not included in the directory
using namespace std;

int main() {
    int a = 5, b = 6;
    cout<<"Operators in c++" << endl;
    cout<<"following are the operators in c++" << endl;
    cout<< "The value of a-b is "<< a-b<<endl;
    cout<< "The value of a+b is "<< a+b<<endl;
    cout<< "The value of a*b is "<< a*b<<endl;
    cout<< "The value of a/b is "<< a/b<<endl;
    cout<< "The value of a%b is "<< a%b<<endl;
    cout<< "The value of a++ is "<< a++<<endl;
    cout<< "The value of a-- is "<< a--<<endl;
    cout<< "The value of ++a is "<< ++a<<endl;
    cout<< "The value of --a is "<< --a<<endl;
    cout<< endl;


    // Assignment operators --> used to assign values to variables
    // int a = 3, b=9;
    // char d = 'd';

    // Comparision operators --> compares the values 
    cout<< "Following are the comparision operators in c++";
    cout<< "The value of a == b is "<< (a==b)<< endl;
    cout<< "The value of a != b is "<< (a!=b)<< endl;
    cout<< "The value of a < b is "<< (a<b)<< endl;
    cout<< "The value of a > b is "<< (a>b)<< endl;
    cout<< "The value of a <= b is "<< (a<=b)<< endl;
    cout<< "The value of a >= b is "<< (a>=b)<< endl;
    cout<< endl;
    // now we will know about logical operators 

    cout<< "Following are the logical operators";
    cout<< "The value of this logical and operator is "<< ((a==b) && (a>b) )<< endl;
    cout<< "The value of this logical or operator is "<< ((a==b) || (a>b) )<< endl;
    return 0;
}