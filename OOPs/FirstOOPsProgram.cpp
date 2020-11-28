#include <iostream>
#include <string>
using namespace std;

class Cars{
    private:
        string company_name;
        string model_name;
        string fule_type;
        float mileage;
        double price;

    public:
        void setData(string cname, string mname, string ftype, float a, double p){
            company_name = cname;
            model_name = mname;
            fule_type = ftype;
            mileage = a;
            price = p;
        }

        void displayData(){
            cout << "Car name : " << company_name << endl;
            cout << "model name : " << model_name << endl;
            cout << "fule_type: " << fule_type << endl;
            cout << "mileage : " << mileage << endl;
            cout << "price : " << price << endl;
        }
};

int main(){

    Cars car1;
    car1.setData("toyota","altis","petrol",15.5,150000);
    car1.displayData();
}
