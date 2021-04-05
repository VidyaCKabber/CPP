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
    void getDetails(){
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
    
    void displayDetails(){
        cout << "Company Name : " << company_name << endl;
        cout << "Model Name : " << model_name << endl;
        cout << "Fuel Type : " << fuel_type << endl;
        cout << "Mileage : " << mileage << endl;
        cout << "Car Price : " << price << endl;
    }
    
};
int main()
{
    Encapsulation encp;
    cout << "Enter car's details" << endl;
    encp.getDetails();
    cout << "Display car's details" << endl;
    encp.displayDetails();

    return 0;
}
