#include <iostream>
using namespace std;

class Vehical{
    protected:
    void ex_protected(){
        cout << "This is protected member function of base class" << endl;
    }
    
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
       Vehical::ex_protected();
    }
    
};

class Bike : public TwoWheeler{
    
};

int main(){
    TwoWheeler b;
    b.display_protected_member();
}
