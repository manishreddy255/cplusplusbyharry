#include<iostream> 

using namespace std; 

int main() {
    

    // int mathMarks[4];
    // mathMarks[0] = 67; 
    // mathMarks[1] = 99; 
    // mathMarks[2] = 67; 
    // mathMarks[3] = 57; 
    // cout<< "These are marks ";
    // cout<< marks[0]<<endl;
    // cout<< marks[1]<<endl;
    // cout<< marks[2]<<endl;
    // cout<< marks[3]<<endl;

    // cout<< "These are the math marks "<< endl;

    // cout<< mathMarks[0]<< endl;
    // cout<< mathMarks[1]<< endl;
    // mathMarks[2] = 566;
    // cout<< mathMarks[2]<< endl;
    // cout<< mathMarks[3]<< endl;


    // looping over arrays

    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     cout<< "The value of marks "<< i<< " is "<< marks[i]<< endl;
    // }
    
    // int i = 0;
    // while (i<=4)
    // {
    //     /* code */
    //     cout<< "The value of marks "<< i << " is "<< marks[i]<< endl;
    //     i++;
    // }

    // do
    // {
    //     /* code */
    //     cout<< "The value of marks "<< i+1 << " is "<< marks[i]<< endl;
    //     i++;
    // } while (i<4);

    // int marks[] = {3, 3,5, 33, 55};
    // cout<< marks;

    /*******
     * c++ pointers and arrays 
     * */

    int marks[] = {23, 24, 65, 78};
    int *p = marks;
    cout<< "The value of marks [0] is "<< *p<< endl;
    cout<< "The value of marks [1] is "<< *(p+1)<< endl;
    cout<< "The value of marks [2] is "<< *(p+2)<< endl;
    cout<< "The value of marks [3] is "<< *(p+3)<< endl;
 

    return 0;
}