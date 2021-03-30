// 4 . In case of multiple inheritance.

#include <iostream.h>
using namespace std;

class A {
	protected:
		Int x;
	public:
		A(){ x = 10;}
}

class B{
	protected:
		int x;
	public:
		B() { x = 20;}
}
	
class C : public A,public B {
		cout << “A’s x is “ A::x;
		cout << “B’s x is “ B::x;
}

int main(){
	C c;
	c.fun();
	return 0;
}
