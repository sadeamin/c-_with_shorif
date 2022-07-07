#include <iostream>
using namespace std;

class Rectrangle {
    public:
    int height;
    int width;
    
    // int area(){

    //     return height*width;

    // }

    int area();

};

inline int Rectrangle::area(){

    return height*width;

}

int main(){


    Rectrangle obj;

    obj.height = 5;
    obj.width = 6;

    cout<<"Area = " << obj.area()<<endl;


    return 0;


}
