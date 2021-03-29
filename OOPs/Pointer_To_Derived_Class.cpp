#include <iostream>
using namespace std;

class base{
  public:
    int n1;
    void show(){
      cout << n1;
    }
};

class derive : public base{
    public:
      int n2;
      void show(){
        cout << n2;
    }
};

int  main(){
    Base b;
    Base *ptr;
    Ptr = &b;
    Derive d;
    Ptr = &d;
    Ptr->show();    
}
