#ifndef MANAGEREMPLOYEE_H
#define MANAGEREMPLOYEE_H
#include "SalariedEmployee.h"


class ManagerEmployee : public SalariedEmployee
{
private:
    double bonus = 0;

public:
    void getData();
    void showData();
    void addBonus(double);
    double getSalary();


};

#endif // MANAGEREMPLOYEE_H
