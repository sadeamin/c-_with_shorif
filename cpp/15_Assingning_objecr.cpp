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


    Rectrangle obj, obj1;

    obj.set_h_w(2, 3);
    obj1.set_h_w(5,6);



    cout<<"Area = " << obj.area()<<endl;

    cout<<"Area = " << obj1.area()<<endl;

    obj1 = obj;

    cout<<"Area = " << obj.area()<<endl;

    cout<<"Area = " << obj1.area()<<endl;

    return 0;


}
