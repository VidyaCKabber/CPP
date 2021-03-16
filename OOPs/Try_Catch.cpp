
#include <iostream>
using namespace std;

int main(){

    int x = -1;

    try{
        if(x < 0){
            throw x;
            cout << "After throw (Never executed)\n";
        }
    } catch(int x){
        cout << "Exception Caught\n";
    }
    cout << "After catch (Will be executed)\n";
}
