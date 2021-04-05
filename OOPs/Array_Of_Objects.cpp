#include <iostream>
#include <string>
using namespace std;

class Encapsulation{
private:
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;
    
public:
    void getDetails(int index){
        
        cout << "Enter " <<index <<"car's details" << endl;
        
        cout << " Enter company name : " ;
        cin >> company_name;
        cout << " Enter model name : " ;
        cin >> model_name;
        cout << " Enter fuel type : " ;
        cin >> fuel_type;
        cout << " Enter mileage : " ;
        cin >> mileage;
        cout << " Enter price : " ;
        cin >> price;
    }
    void displayDetails(int index){
        cout << "Display " << index <<"car's details" << endl;
        cout << "Company Name : " << company_name << endl;
        cout << "Model Name : " << model_name << endl;
        cout << "Fuel Type : " << fuel_type << endl;
        cout << "Mileage : " << mileage << endl;
        cout << "Car Price : " << price << endl;
    }
    
};
int main()
{
    Encapsulation encp[3];
    
    for(int i=0; i < 2 ; i++){
        encp[i].getDetails(i);
    }
    
    for(int i=0; i < 2 ; i++){
        encp[i].displayDetails(i);
    }
    
    return 0;
}
