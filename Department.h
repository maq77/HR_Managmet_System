#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include<string>
using namespace std;


class Department
{
    public:
        void getDepartment();
        void showDepartment();
        void setDepartment(string,int);


    protected:

    private:
        int Dep_id;
        string Department;

};

#endif // DEPARTMENT_H
