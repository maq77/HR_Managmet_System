#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include"Department.h"
#include"Benefits.h"
#include"DentalBenefit.h"
#include"HealthBenefit.h"

using namespace std;

class Employee{
protected:

int empID;
string name;
string phone;
string email;
string jobTitle;
double salary;
Department Dep;
DentalBenefit D;
HealthBenefit H;

public:
virtual void getData();
virtual void ShowData();
int setID(int newID);
void setName(string newName);
void setEmail(string newEmail);
void setJobTitle(string newjob);
double setSalary(double newSalary);


string getName();
int getID();

};
#endif // EMPLOYEE_H
