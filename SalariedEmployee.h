#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"
#include <string>
using namespace std;

class SalariedEmployee : public Employee
{
protected:
    double salary;

public:
    void getData();
    void showData();
    double getSalary();
    void setSalary(double);
};

#endif // SALARIEDEMPLOYEE_H
