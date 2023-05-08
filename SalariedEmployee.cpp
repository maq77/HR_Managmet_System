#include "SalariedEmployee.h"
#include<iostream>
#include<string>
using namespace std;

void SalariedEmployee::getData(){
Employee::getData();
jobTitle = "Salaried Worker";
cout <<"\n\t\t Enter Employee Salary :"; cin>>salary;

}

void SalariedEmployee::showData(){

Employee::ShowData();
cout <<"\t\t Job Title : "<<jobTitle
     <<"\n\t\t Employee Salary : "<<salary << " EGP ";



}
void SalariedEmployee::setSalary(double newSalary){

salary = newSalary;


}
double SalariedEmployee::getSalary(){



return salary;


}
