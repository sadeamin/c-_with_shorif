#include <iostream>
using namespace std;

class static_variable{
public:
    static int a;
    static int b;

    static void fun()
    {
        cout<<++a<<" "<<++b<<endl;
    }

    void abc(){
        b = 0;
    }

};


int static_variable::a; 
int static_variable::b;

int main(){

    static_variable obj, obj1;

    obj.fun();
    obj.fun();
    obj1.fun();




    return 0;
}