#include <iostream>
using namespace std;

class Vehical{
    protected:
    int a=9;
    
    public:
    Vehical(){
        cout << "This is vehical class" << endl;
    }
    
    public:
    void test(){
        cout << "Base class 1 method" << endl;
    }
};

class TwoWheeler : public Vehical{
    public:
    TwoWheeler(){
        cout << "This is TwoWheeler class"  << endl;
    }  
    
    void display_protected_member(){
       cout << "protected member accessed by any subclass(derived class) of that class." << a << endl;
    }
    
};

class Bike : public TwoWheeler{
    
};

int main(){
    Bike b;
    b.display_protected_member();
}
