#include <iostream.h>

Class Parent1 {
    Protected:
        Int x;
    Public:
        A(){ x = 10;}
        void print(){
            cout << "Value of X is = " << x << endl;
        }
}

Class Parent2{
    Protected:
        Int x;
    Public:
        B() { x = 20;}
}
    
Class Child : public Parent1,public Parent2 {
    Cout << “A’s x is “ Parent1::x;
    Cout << “B’s x is “ Parent1::x;
}
    Int main(){
    Child c;
    c.print();
    return 0;
}
