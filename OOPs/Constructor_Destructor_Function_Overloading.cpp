#include <iostream>
#include <string>
using namespace std;

class Employee {

    public:
        int no_of_openings = 5;

        // This is the constructor declaration
        Employee(int openings){
            no_of_openings = openings;
            cout << "\n Number of open positions are " << no_of_openings <<endl;
        }

        // This is the destructor: declaration
        ~Employee();

    public:
        void newEmployeeSkills(string role_name, string education, float year_of_experience, int salary_expectation_yr){
            if(role_name == "Developer"){
                if(year_of_experience > 4 && year_of_experience < 6){
                    cout << "Eligible for Senior developer role" << endl;
                } else if(year_of_experience >= 2 && year_of_experience < 5) {
                    cout << "Eligible for Software Development Engineer II" << endl;
                } else {
                    cout << "You can apply for fresher role" << endl;
                }
                printf("\n YOu have offered %d lacks per annum based on your experience and role. Recruitment team will communicate on this after interview",salary_expectation_yr);
            }
        }

        void newEmployeeSkills(string role_name, string education, float year_of_experience, string add_on_skills, string gender, int salary_expectation_yr){

            if(gender == "Female"){
                printf("\n Male condidates are more preferred. But, women condidates can feel free to apply. Recruitment team will take desicion based on skkils");
            }
            if(role_name == "Developer"){
                    if(add_on_skills == "QA") {
                         if(year_of_experience > 4 && year_of_experience < 6){
                            cout << "Eligible for Senior DevApps Engineer role" << endl;
                        } else if(year_of_experience >= 2 && year_of_experience < 5) {
                            cout << "Eligible for Software Development Engineer II and should be ready to do Quality Analysis" << endl;
                        } else {
                            cout << "You can apply for Test Engineer role and can work on development on priority" << endl;
                        }
                    } else {
                        if(year_of_experience > 4 && year_of_experience < 6){
                            cout << "Eligible for Senior developer role" << endl;
                        } else if(year_of_experience >= 2 && year_of_experience < 5) {
                            cout << "Eligible for Software Development Engineer II" << endl;
                        } else {
                            cout << "You can apply for fresher role" << endl;
                        }
                    }

                printf("\n YOu have offered %d lacks per annum based on your experience and role. Recruitment team will communicate on this after interview",salary_expectation_yr);

            }
        }
};

Employee::~Employee(void){
    cout << "\nObject is being deleted\n" << endl;
}

int main(){

    printf("\n Role : Developer, Qualification : BE CS, Experience : 2\n");
    Employee emp(2);
    emp.newEmployeeSkills("Developer","BE CS",2,550000);

    printf("\n Role : Developer, Qualification : BTech CS, Experience : 2\n, Add-On Skills : QA\n");
    Employee emp1(5);
    emp1.newEmployeeSkills("Developer","BTech CS",5,"QA","Male",900000);

}
