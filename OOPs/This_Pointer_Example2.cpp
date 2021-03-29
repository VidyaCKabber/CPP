//2) *this* pointer can be used To return reference to the calling object
/* Reference to the calling object can be returned */ 

///When a reference to a local object is returned, the returned reference can be used to chain function calls on a single object.
 
#include<iostream> 
using namespace std; 
  
class Test 
{ 
private: 
  int x; 
  int y; 
public: 
  Test(int x = 0, int y = 0) { this->x = x; this->y = y; } 
  Test &setX(int a) { 
    x = a; return *this; 
  } 
  Test &setY(int b) {
    y = b; return *this; 
  } 
  void print() {
    cout << "x = " << x << " y = " << y << endl;
   } 
}; 
  
int main() 
{ 
  Test obj1(5, 5); 
  
  // Chained function calls.  All calls modify the same object 
  // as the same object is returned by reference 
  obj1.setX(10).setY(20); 
  
  obj1.print(); 
  return 0; 
} 
