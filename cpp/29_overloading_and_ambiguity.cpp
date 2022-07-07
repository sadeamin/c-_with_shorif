#include <iostream>
using namespace std;

int abc(int a, int b){

    return a+b;

}

int abc(int a){

    return a;
}

int main(){

    cout<<abc(5,6)<<endl;
    cout<<abc(5)<<endl;

    return 0;
}