#include <iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        cout << "This is super class method" << endl;
    }
};
class Fare{
    public:
    Fare(){
        cout << "This is fare class" <<endl;
    }
};
class Car : public Vehicle{
    
};
class Bike : public Vehicle, public Fare{
    
};
int main()
{
    Bike b;
    Car c;

    return 0;
}
