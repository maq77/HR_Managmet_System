#include "CommissionEmployee.h"

void CommissionEmployee::getData(){
Employee::getData();
jobTitle = "Commission Worker";
cout <<"\n\t\t Enter Employee Target :"; cin>>target;
cout <<"\n\t\t Enter Employee rate :"; cin>>rate;
salary = rate*target;


}
void CommissionEmployee::showData(){
    Employee::ShowData();
cout <<"\t\t Job Title : "<<jobTitle
     <<"\n\t\t Employee Target: "<<target << " Completed "
     <<"\n\t\t Employee Rate : "<<rate
     <<"\n\t\t Employee Salary : "<<salary << " EGP ";

}
void CommissionEmployee::setrate(double newrate){

rate = newrate;

}
void CommissionEmployee::settarget(double newtarget){

target = newtarget;

}
double CommissionEmployee::getSalary(){

salary = rate*target;

return salary;
}
