#include<iostream>
using namespace std;

int global;

int sum(int a, int b){

    int sum;
    sum = a + b;
    return sum;


}

int main()
{
    // int a = 5;
    // cout<<a<<endl;


    // {
    //     int b = 10;
    //     cout<<b<<endl;
    // }

    // cout<<b<<endl;


    int a, b;
    a = 10, b = 5;
    // cout<<sum(a, b)<<endl;

    {

        int k=5;
        cout<<k<<endl;
    }

    float k = 3.06;
    cout<<k<<endl;

    for(int i=1; i<=5; i++){
        cout<<i<<" ";
    }
    return 0;
}
