#include "HourlyEmployee.h"
#include <iostream>

using namespace std;

void HourlyEmployee::addHours(int moreHours){

HoursWorked += moreHours;

}
double HourlyEmployee::getSalary(){
salary = rate*HoursWorked;
return salary;
}
void HourlyEmployee::setrate(double newrate){
rate = newrate;
}
void HourlyEmployee::setHoursWorked(double newHoursWorked){
HoursWorked = newHoursWorked;

}
void HourlyEmployee::getData(){
    Employee::getData();
    jobTitle = "Hourly Worker";
cout <<"\n\t\t Enter Employee Hours Worked :"; cin>>HoursWorked;
cout <<"\n\t\t Enter Employee rate :"; cin>>rate;
salary = rate*HoursWorked;
}
void HourlyEmployee::showData(){
Employee::ShowData();
cout <<"\t\t Job Title : "<<jobTitle
     <<"\n\t\t Employee Hours Worked : "<<HoursWorked << " Hour "
     <<"\n\t\t Employee Rate : "<<rate
     <<"\n\t\t Employee Salary : "<<salary << " EGP ";


}

