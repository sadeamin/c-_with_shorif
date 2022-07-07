#include <iostream>
using namespace std;

int abc(int a, int b=0){


    return a+b;
}

int main(){

    cout<<abc(5)<<endl;
    cout<<abc(7, 3)<<endl;


    return 0;
}