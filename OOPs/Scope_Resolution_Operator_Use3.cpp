// 3 . To access a class’s static variables.

#include <iostream>
Using namespace std;

Class Test {
    Static int x;
  Public:
    Static int y;
    Void func(int x){
  Cout << “Value of static x is” << Test::x;
  Cout <<”Value of local x is” << x;
  } 
}

Int Test :: x =  1;
Int Test :: y = 2;

Int main(){
			Test obj;
			Int x = 3;
			Obj.fun(x);
			Cout << “Test :: y = “ << Test :: y;
}

	
