#include "ManagerEmployee.h"
#include "Employee.h"
#include <iostream>
using namespace std;

void ManagerEmployee::getData(){
SalariedEmployee::getData();
jobTitle = "Manager";
cout <<"\n\t\t Enter Bonus :"; cin>>bonus;
}

void ManagerEmployee::showData(){

SalariedEmployee::ShowData();
cout <<"\t\t Job Title : "<<jobTitle;
cout <<"\t\t Bonus : "<<bonus;
cout <<"\t\t Salary : "<<salary;



}
void ManagerEmployee::addBonus(double addbonusSalary){
bonus = addbonusSalary;
salary += bonus;

}
double ManagerEmployee::getSalary(){

return salary;


}
