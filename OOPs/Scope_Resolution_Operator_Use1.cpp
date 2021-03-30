#include <iostream>
Using namespace std;

//1. To access a global variable when there is a local variable with the same name.
Int x; // global x

Int main(){
	
	Int x = 10;
	Cout << “Value of global x is “ << ::x;
	Cout << “Value of local x is “<< x;

Return 0;
}

