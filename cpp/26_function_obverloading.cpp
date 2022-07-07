#include <iostream>
using namespace std;

int add(int a, int b){
    cout<<"first function called"<<endl;
    return a+b;
}

int add(int a, int b, int c){

    cout<<"second function called"<<endl;
    return a+b+c;


}

double add(double a, double b){
    cout<<"double function called."<<endl;
    return a+b;
}

float add(float a, float b){
    cout<<"Float function called"<<endl;
    return a+b;
}


int main(){


    // cout<<add(3, 4)<<endl;
    // cout<<add(3, 4, 5)<<endl;

    cout<<add(2.5, 2.5)<<endl;

    // float a = 2.5, b = 2.0;

    // cout<<add(a, b)<<endl;

    return 0;
}