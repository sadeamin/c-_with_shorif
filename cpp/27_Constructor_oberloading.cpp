#include <iostream>
using namespace std;

class abc{
    int a;
    
public: 
    abc(int x){
        a = x;
    }

    abc(){a = 0;
    }

    abc(int x, int y){a=x*y;}

    int ret() 
        {
            return a;
        
        }



};

int main(){

    abc obj(5);
    abc obj1;
    abc obj2(2, 4);
    cout<<obj.ret()<<endl;
    cout<<obj1.ret()<<endl;
    cout<<obj2.ret()<<endl;

    return 0;
}