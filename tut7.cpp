#include<iostream>
using namespace std;

// int c = 45;

int main() {


    //*************Built in Data Types***************
    // int a, b, c;
    // float d = 34.55;
    // cout<< "Enter the value of a:"<<endl;
    // cin>>a;

    // cout<< "Enter the value of b:"<< endl;
    // cin>> b;

    // c= a+b;
    // cout<< "the sum is: "<< c << endl;
    // cout<< "the global c is "<< ::c;

//***********float double and long double literals*******************
    // float d = 34.4f;
    // long double e = 34.5l;

    // cout<< "The size of 34.4F is "<< sizeof(34.4F)<<endl;
    // cout<< "The size of 34.4f is "<< sizeof(34.4f)<<endl;
    // cout<< "The size of 34.4L is "<< sizeof(34.4L)<<endl;
    // cout<< "The size of 34.4l is "<< sizeof(34.4l)<<endl;
    
    // cout<< " the value of d is "<< d<< endl<< "The value of e is "<< e;


    //*************Referance variables*****************

    // float x = 455;
    // float &y = x;
    // // referance variable & is used to point another variable to 
    // // same value of other variable
    // // if the x changes then y also changes accordingly 
    // // x = 366;
    // cout<< x<< endl;
    // cout<< y<< endl;

    // x =3989;
    // y = 7888;
    // cout<< x << endl<< y;

    // if you change x or y value both the values changes
    // as they are connected by reference variable


// ************Type casting********
// Type casting is nothing but changing the value from one type to another type
    int a = 45;
    int b = 78.32;
    cout<< "The value of a is"<< (float)a<< endl;
    cout<< "The value of b is "<<int(b)<< endl;
    // int c = int(b);

    cout<< "The expression is "<< a + b<< endl;
    cout<< "The expression is "<< a + int(b) ;
    cout<< "The expression is "<< a + (int)b;

    return 0;
}