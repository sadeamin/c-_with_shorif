#include <iostream>
using namespace std;

int abc(int a, int b){

    return a+b;

}

void abc(int a){

    cout<<a<<endl;
}

int main(){

    int (*p1) (int, int);

    p1 = abc;
    cout<<"function:id"<<p1<<endl;
    cout<<p1(3,4)<<endl;

    void (*p2)(int);
    cout<<"function:id:"<<p2<<endl;
    p2 = abc;
    abc(5);

    return 0;
}