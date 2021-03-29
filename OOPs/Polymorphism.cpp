#include <iostream>
#include <string>
using namespace std;

class polymorphism{
public:
    int add(int a,int b){
        return (a+b);
    }
 float add(float a, int b, int c){
        return (a+b+c);
    }
};
int main(){
    polymorphism plm;
    cout << plm.add(1,4) << endl;
    cout << plm.add(2.3,3,3) << endl;
}
