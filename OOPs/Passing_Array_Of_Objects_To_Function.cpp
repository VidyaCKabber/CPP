#include <iostream>
#include <string>
using namespace std;

class Car{
private:
    string name;
    // Prire in lacks
    float price;
    // speed in km/h
    int speed;
public:
    void setDetails(string cname, float cprice, int cspeed){
        name = cname;Pas
        price = cprice;
        speed = cspeed;
    }
    void getDetails(Car obj[]){
        cout << "Name = " << obj[0].name << " ,Price = " <<  obj[0].price << " ,Speed = " << obj[0].speed << endl;
        cout << "Name = " << obj[1].name << " ,Price = " <<  obj[1].price << " ,Speed = " << obj[1].speed << endl;
    }
};

int main(){
    Car car[2],obj;
    car[0].setDetails("BMW",37.18,250);
    car[1].setDetails("Maruti",3,165);
    obj.getDetails(car);

    return 0;
}
