
#include <iostream>
using namespace std;

class Vehicle{
    public:
    Vehicle(){
        cout << "This is super class method" << endl;
    }
};
class Car : public Vehicle{
    
};
class Bike : public Vehicle{
    
};

int main()
{
    Bike b;
    Car c;

    return 0;
}
