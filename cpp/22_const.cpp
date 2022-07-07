#include <iostream>
using namespace std;


class example {

    public:

        int a ;

    int can_not_change (int x) const{
        // a = x;
        x = a;
        return a ;
    }
};




int main(){


    // const int val = 4;
    // cout<<val<<endl;
    // val = 4;

    // int i = 0; 
    // r = 0;




    return 0;


}