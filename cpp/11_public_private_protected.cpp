#include <iostream>
using namespace std;



class Rectrangle {

    int height;
    int width;
    
    // int area(){

    //     return height*width;

    // }

public:
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


    Rectrangle obj;

    // obj.height = 5;
    // obj.width = 6;

    obj.set_h_w(5, 7);


    cout<<"Area = " << obj.area()<<endl;


    return 0;


}
