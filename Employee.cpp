#include "Employee.h"
#include"Department.h"
#include <iostream>
#include <string>

using namespace std;
//////////////////main get Data/////////////////////////
void Employee::getData(){
cout <<"\n\t\t Enter Employee ID :"; cin>>empID;
cout <<"\n\t\t Enter Employee Name :"; cin>>name;
cout <<"\n\t\t Enter Employee Phone :"; cin>>phone;
cout <<"\n\t\t Enter Employee Email :"; cin>>email;
Dep.getDepartment();
H.getBenefits();
D.getBenefits(H.amount);

}
/////////////////////////main show data////////////////////
void Employee::ShowData(){
cout<<"\t\t Employee ID : "<< empID
     << "\n\t\t Employee Name : " << name
     << "\n\t\t Employee Phone : " << phone
     << "\n\t\t Employee Email : " << email
     << "\n\t\t Employee Health Benefit : " << H.calculateBenefits()
     << "\n\t\t Employee Dental Benefit : " << D.calculateBenefits();
     Dep.showDepartment();


}
////////////////////////////////////////////////////////////

int Employee::setID(int newID){
empID = newID;
}
void Employee::setName(string newName){
name = newName ;
}
void Employee::setEmail(string newEmail){
email = newEmail;
}
void Employee::setJobTitle(string newjob){
jobTitle = newjob;
}
double Employee::setSalary(double newSalary){
salary = newSalary;
return salary;
}

//////////////////////////////////////////////////////////////////////
/////////////////////////////Searching Algorithm//////////////////////
string Employee::getName(){


return this->name;

}
int Employee::getID(){


return this->empID;

}
