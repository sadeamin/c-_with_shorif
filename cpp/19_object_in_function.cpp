#include <iostream>
using namespace std;


class rectangle{

    int height;
    int width;

public:
    void set(int height , int width){this->height = height ; this->width = width;}
    int area(){return height*width;}

    void display(rectangle object){
        cout<<object.area()<<endl;
    }

    rectangle auto_set(){

        rectangle ob;
        int h, w;
        cout<<"enter height and width :"<<endl;
        cin>>h>>w;
        ob.set(h, w);

        return ob;
        
    }
};


int main(){

    rectangle obj;
    obj = obj.auto_set();
    obj.display(obj);

    return 0;


}