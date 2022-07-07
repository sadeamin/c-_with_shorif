#include <iostream>
using namespace std;



class Rectrangle {

    int height;
    int width;
    
    // int area(){

    //     return height*width;

    // }

public:

    Rectrangle(int h, int w){
        height = h;
        width = w;
        cout<<"constructor has called"<<area()<<endl;
    }

    ~Rectrangle(){

        cout<<"destructor has called"<<area()<<endl;

    }

    void set_h_w(int h, int w)
    {
        height = h;
        width = w; 
    }
    int area()
    {
        return height*width;

    }

};





int main(){


    Rectrangle obj(5, 6), obj1(9, 2);

    // obj.height = 5;
    // obj.width = 6;

    // obj.set_h_w(5, 7);


    // cout<<"Area = " << obj.area()<<endl;


    return 0;


}
