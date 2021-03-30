// 2 . To define a function outside a class.

#include <iostream.h>
Using namespace std;

Class A {

Public:
Void fun(); // only declaration
}
};

Void A:: fun(){
Cout << “fun() called”;
}

Int main(){

A a;
a.fun();
return 0;
}
