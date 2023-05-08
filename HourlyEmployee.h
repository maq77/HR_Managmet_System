#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include <string>
#include "Employee.h"

using namespace std;

class HourlyEmployee: public Employee{

private:

double HoursWorked;
double rate;


public:

void addHours(int moreHours);
double getSalary();
void setrate(double newrate);
void setHoursWorked(double newHoursWorked);
void getData();
void showData();
};

#endif // HOURLYEMPLOYEE_H
