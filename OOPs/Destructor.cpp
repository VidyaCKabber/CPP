#include <iostream>
#include <string>
using namespace std;

class Cars{
    public:
    int a;
public:
    Cars(){
        a = 10;
    }
    ~Cars(){
        cout << "Destructing...";
    }
};


int main(){
    Cars car,car1,car2;
    cout << car.a << endl;

}
