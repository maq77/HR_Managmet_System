#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;

class CommissionEmployee: public Employee
{
    private:
        double target;
        double rate;
    public:
        void getData();
        void showData();
        void setrate(double newrate);
        void settarget(double newtarget);
        double getSalary();
};

#endif // COMMISSIONEMPLOYEE_H
