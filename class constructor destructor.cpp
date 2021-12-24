#include <iostream>
using namespace std;

class wall{
    float length;
    float breadth;
    public:
 /*   wall(){                                //Default constructor
        cout << "Default constructor" << endl;
    } */

    wall(float l, float b){              //Parameterized constructor
        length = l;
        breadth = b;
        cout << "Parameterized constructor" << endl;
    }
    float product(){
        return length*breadth;
    }
    ~wall(){
        cout << "destructor" << endl;
    }
};

int main(){ 
    wall wall1(2.3, 6);
    cout << wall1.product() << endl;
    return 0;
}
