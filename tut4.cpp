#include<iostream>
using namespace std;

int glo = 4;

void sum() {
    int a ;
    cout<< glo;
}

int main() {
    int glo = 9;
    glo = 78;
    // int a = 4;
    // int b = 5;
    int a = 14, b = 15; 
    float pi = 3.14;
    char c = 'u';
    bool is_true = true;
    sum();
    cout<< glo << is_true;
    // cout<< " this is tutorial\n 4. the value of a is "<< a<< "\n The value of b is "<< b;
    // cout<< "\nThe value of pi is"<< pi;
    // cout<< "\nThe value of c is "<< c;
    return 0;
}