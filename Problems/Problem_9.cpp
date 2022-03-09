/*With CPP show how polymorphism is achieved at run-time and compile-time 

Compile-time polymorphism: 

Whenever an object is bound with their functionality at the compile time, this is known as compile-time polymorphism.

Compile-time polymorphism achieved through function or operator overloading.

Example:
*/
// Function overloading
#include <iostream>
using namespace std;

class FunctionOverloading{

public:
    void add(int a , int b){
        cout << "a+b = " << a+b ;
    }

    void add(int a, int b, float c){
        cout << "\na+b+c = " << a+b+c;
    }
};

int main(){
    FunctionOverloading fo;

    fo.add(23,7);
    fo.add(2,3,5.8);
}


//Operator overloading


#include <iostream>
using namespace std;

class OperatorOverloading{

public:
    int num = 0;

public:

    void operator +(){
        ++num;
    }

    void print(){
        cout << num << endl;
    }
};

int main(){
    OperatorOverloading fo;

    +fo;

    fo.print();
}



/*Run-time polymorphism: 

This type of polymorphism is achieved by function overriding.

Function overriding on the other hand occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.
*/

#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual void print ()
    { cout<< "print base class" <<endl; }

    void show ()
    { cout<< "show base class" <<endl; }
};

class derived:public base
{
public:
    void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
    { cout<< "print derived class" <<endl; }

    void show ()
    { cout<< "show derived class" <<endl; }
};

//main function
int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    //virtual function, binded at runtime (Runtime polymorphism)
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();
}

