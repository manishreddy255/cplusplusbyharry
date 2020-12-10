#include<iostream> 

using namespace std; 

int main() {
    //***** Pointers in c++ *********
    // pointer is a datatype which holds the address of 
    // other data types

    // pointer notation
    
    int a = 3;

    int *b = &a;
    //& ---> (Address of) operator
    cout<<"The address of a is "<< b << endl;
    cout<<"The address of a is "<< &a << endl; 
    // * ---> (value at)Dereference operator
    cout<< "The value at address b is: "<< *b << endl;

    int **c = &b;
    //pointer to pointer
    // it pointer to the address of a pointer address
    cout<< "the address of b is"<< &b<< endl;
    cout<< "The address of b is "<< c << endl;
    cout<< "The value at the address of c is"<< *c<< endl;
    cout<< "The value at the address of address at c is"<< **c << endl;

    return 0;
}