#ifndef HRSYS_H
#define HRSYS_H
#include "Employee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "SalariedEmployee.h"
#include "ManagerEmployee.h"
#include <iostream>
#include <string>
using namespace std;

class HRsys{
private:
HourlyEmployee *HourlyEmployeeList = new HourlyEmployee[10];
int number_of_HourlyEmployees = 0;
CommissionEmployee *CommissionEmployeeList = new CommissionEmployee[10];
int number_of_CommissionEmployees = 0;
SalariedEmployee *SalariedEmployeeList = new SalariedEmployee[10];
int number_of_SalariedEmployees = 0;
ManagerEmployee *ManagerEmployeeList = new ManagerEmployee[10];
int number_of_ManagerEmployees = 0;
char ch;
int chooseEmployeeType;
int search=0;
int number_of_employees = 0;
int arr_deleted_Hourly[10]; //////////array to store deleted nums
int arr_deleted_Commission[10];
int arr_deleted_Salaried[10];
int arr_deleted_Manager[10];

public:
void AddEmployee();
void ShowEmployees();
void SearchEmployees();
void EditEmployees();
void DeleteEmployees();
~HRsys();
};

#endif // HRSYS_H
