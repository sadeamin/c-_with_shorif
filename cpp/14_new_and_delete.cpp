#include <iostream>
using namespace std;

int main(){

    int *ptr;
    // int a = 5;
    // ptr = &a;

    // ptr = new int(5);
    ptr = new int[5];


    ptr[0] = 9;
    cout<<ptr[0]<<endl;
    cout<<*ptr<<endl;
    // *ptr = 7;
    // cout<<*ptr<<endl;


    // delete(ptr);
    delete [] ptr;

    return 0;



}