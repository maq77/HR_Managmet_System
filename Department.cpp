#include "Department.h"
#include<iostream>
using namespace std;

void Department::getDepartment(){

cout <<"\n\t\t Enter Employee Department ID :"; cin>>Dep_id;
cout <<"\n\t\t Enter Employee Department :"; cin>>Department;

}
void Department::showDepartment(){
cout<< "\n\t\t Employee Department ID : " << Dep_id;
cout<< "\n\t\t Employee Department : " << Department<<endl;


}
void Department::setDepartment(string newDepartment,int ID){

Department = newDepartment;
Dep_id = ID;

}
