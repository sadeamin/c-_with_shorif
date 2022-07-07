#include <iostream>
using namespace std;

class Rectrangle {
    public:
    int height;
    int width;

};

int main(){


    Rectrangle obj;

    obj.height = 5;
    obj.width = 6;

    cout<<"Area = " << obj.height*obj.width<<endl;

    return 0;


}