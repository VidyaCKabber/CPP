#include <iostream>
using namespace std;

int main(){
    try{
        throw 10;
    } catch(char *excp){
        cout << "Caught!!" ;
    } catch(...){
        cout << "Default Exception!!";
    }
}
