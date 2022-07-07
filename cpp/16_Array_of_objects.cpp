#include <iostream>
using namespace std;

class rectangle {
    int height;
    int width;


public:
    // void set(int a, int b)
    //     {
    //         height = a; 
    //         width = b;
    //     };


    // rectangle (int a)
    //     {
    //         height = a;
    //         width = a;
    //     };

    rectangle (int a, int b)
        {
            height = a;
            width = b;
        };

    rectangle (){
        height = 5;
        width = 6;
    }

    int area(){
        return height*width;
    };

};

int main()

{

    // rectangle obj[5] = {1,2,3, 4, 5};
    // rectangle obj[5] = {rectangle(1, 2), rectangle(2, 2), rectangle(3, 2),rectangle(4, 2), rectangle(5, 2)};
    rectangle obj[5];// = {rectangle(1, 2), rectangle(2, 2), rectangle(3, 2),rectangle(4, 2), rectangle(5, 2)};

    // obj[0].set(1,2);
    // obj[1].set(2,2);
    // obj[2].set(3,2);
    // obj[3].set(4,2);
    // obj[4].set(5,2);

    for(int i=0; i<5; i++)
    {
        cout<<i<<" = "<<obj[i].area()<<endl;
    }


    return 0;
}