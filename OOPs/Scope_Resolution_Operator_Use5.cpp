// 5.  Refer to a class inside another class: if a class exists inside another class we can use the nesting class refer the nested class using the scope resolution operator.

#include <iostream>
using namespace std;

class outside{
public:
		int x;
		static int y;
		int foo();
		};
};

int outside :: inside :: y = 5;

intmain(){
		outside A;
		outside :: inside B;
}
