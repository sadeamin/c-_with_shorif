#include <iostream>
using namespace std;

class rectangle;

class cost{

    int costrate;

public:

    void set_cost(int cost)
    {
        costrate = cost;

    }

    int totalCost(rectangle a);

};



class rectangle{

    int height;
    int width;

public:
    void set(int height , int width){this->height = height ; this->width = width;}
    int area(){return height*width;}

    // friend class cost;
    friend int cost::totalCost(rectangle a);
};

int cost::totalCost(rectangle a)
    {

        return costrate* a.height*a.width;
    }



int main(){

    rectangle obj;
    obj.set(5, 5);
    cost c;
    c.set_cost(100);
    cout<<obj.area()<<endl;

    cout<<"totol cost is:"<<endl;
    cout<<c.totalCost(obj)<<endl;


    return 0;


}