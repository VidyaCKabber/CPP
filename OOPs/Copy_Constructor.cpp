#include <iostream>
#include <string>
using namespace std;

class Cars{
    public:
    int a,b;
public:
    Cars(int i, int j){
        a = i;
        b = j;
    }
    //copy constructor
    Cars(Cars &m){
        a = m.a;
    }
};

int main(){
    Cars car(2,3);
    Cars car1(car);
    cout << car1.a << endl;

}
