#include<iostream> 

using namespace std; 

typedef struct employee
{
    /* data */
    int eId;
    char favchar;
    float salary;
} ep;

// by using typedef you can call the struct using whatever you place after the 
// curly braces

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

// union just allots one memory which is shared by all 
// so if one is declared then it uses the memory 



int main() {
     
    // ***** structure ******
    // It is a user defined data type 
    // which is used to combine different types of items


    // ******* union **********

    // union money m1;

    // m1.pounds = 566;
    // m1.car = 'c';

    // cout<< m1.car << endl;
    

    // // struct employee harry;
    // // struct employee shubham;
    // ep harry;
    // ep shubham;

    // shubham.eId = 34;
    // shubham.favchar = 'm';
    // shubham.salary = 676;

    // harry.eId = 1;
    // harry.favchar = 'c';
    // harry.salary = 12000000;

    // cout<< harry.salary ;
    // cout<< harry.favchar ;
    // cout<< harry.eId << endl ;

    // cout<< shubham.eId << endl;
    // cout<< shubham.salary << endl;
    // cout<< shubham.favchar << endl;


    enum Meal{breakfast, lunch, dinner};
    cout<< breakfast<< endl;
    cout<< lunch<< endl;
    cout << dinner << endl;

    return 0;
}