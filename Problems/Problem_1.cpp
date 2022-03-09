/*Program to read the data of n employees and compute net salary of each employee
*/

#include <iostream>

using namespace std;

class Employee{

public:
    char emp_name[100];
    int emp_id;
    float basic_salary,deduction, income_tax, grass_salary,net_salary;

public:
    void get_employee_details(int num){
        cout << num << " employee details" << endl;
        cout << "Employee Name : ";
        cin >> emp_name;
        cout << "Employee ID : ";
        cin >> emp_id;
        cout << "Employee Basic Salary : ";
        cin >> basic_salary;
        cout << "\n------------" << num << " employee details are saved" <<  "------------\n"<< endl;
    }

    float calculate_net_salary(){
        deduction = basic_salary * 0.52;
        grass_salary = basic_salary + deduction;
        income_tax = grass_salary * 0.30;
        net_salary = grass_salary - income_tax;

        return net_salary;
    }

    void display_employee_net_salary(){
        cout << "Employee Name : " << emp_name << endl;
        cout << "Employee Id : " << emp_id << endl;
        cout << "Employee Net_salary : " << net_salary << endl;
    }
};

int main(){
    int n,num;
    cout << "Number of employees : ";
    cin >> n ;

    Employee emp[n];

    for(num =0; num < n; num++){
        emp[num].get_employee_details(num+1);
    }

    for(num =0; num < n; num++){
        emp[num].calculate_net_salary();
    }

    for(num =0; num < n; num++){
        emp[num].display_employee_net_salary();
    }
}



