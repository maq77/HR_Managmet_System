#include "HRsys.h"
#include<string>
using namespace std;

void HRsys::AddEmployee(){
do{
    cout<<"\t\t 1- Hourly Employee "<<endl;
    cout<<"\t\t 2- Commision Employee "<<endl;
    cout<<"\t\t 3- Salaried Employee "<<endl;
    cout<<"\t\t 4- Manager "<<endl;
    cout<<"\t\t >>>> ";cin>>chooseEmployeeType;
switch(chooseEmployeeType){
case 1:
    HourlyEmployeeList[number_of_HourlyEmployees].getData();
    number_of_HourlyEmployees++;
    break;
case 2:
    CommissionEmployeeList[number_of_CommissionEmployees].getData();
    number_of_CommissionEmployees++;
    break;
case 3:
    SalariedEmployeeList[number_of_SalariedEmployees].getData();
    number_of_SalariedEmployees++;
    break;
case 4:
    ManagerEmployeeList[number_of_ManagerEmployees].getData();
    number_of_ManagerEmployees++;
    break;
}
cout<<"\t\t------------------------------------------ "<<endl;
cout<<"\t\tDo Yo want to Add Another Employee ?(Y,N) : "<<endl;
cout<<"\t\t >>>> ";cin >> ch;
}while( ch == 'y' || ch == 'Y');
}
void HRsys::ShowEmployees(){
    cout<<"\n\n\t\t 1- Hourly Employees "<<endl;
    cout<<"\t\t 2- Commision Employees "<<endl;
    cout<<"\t\t 3- Salaried Employees "<<endl;
    cout<<"\t\t 4- Manager "<<endl;
    cout<<"\t\t 5- All Employees "<<endl;
    cout<<"\t\t >>>> ";cin>>chooseEmployeeType;
switch(chooseEmployeeType){
case 1:
    for(int i=0;i<number_of_HourlyEmployees;i++){
    cout<<"\n\n\t\t-------------Employee No. "<<i+1<<" --------------"<<endl;
    if(arr_deleted_Hourly[i] == 1){
        continue;
    }
    HourlyEmployeeList[i].showData();
    }
    break;
case 2:
    for(int i=0;i<number_of_CommissionEmployees;i++){
    cout<<"\n\n\t\t-------------Employee No. "<<i+1<<" --------------"<<endl;
    if(arr_deleted_Commission[i] == 1){
        continue;
    }
    CommissionEmployeeList[i].showData();
    }
    break;
case 3:
    for(int i=0;i<number_of_SalariedEmployees;i++){
    cout<<"\n\n\t\t-------------Employee No. "<<i+1<<" --------------"<<endl;
    if(arr_deleted_Salaried[i] == 1){
        continue;
    }
    SalariedEmployeeList[i].showData();
    }
    break;
case 4:
    for(int i=0;i<number_of_ManagerEmployees;i++){
    cout<<"\n\n\t\t-------------Employee No. "<<i+1<<" --------------"<<endl;
    if(arr_deleted_Manager[i] == 1){
        continue;
    }
    ManagerEmployeeList[i].showData();
    }
    break;
case 5:
    number_of_employees =0;
    cout<<"\n\n\t\t----------------------- [Hourly Employees] ---------------------"<<endl;
    for(int i=0;i<number_of_HourlyEmployees;i++){
    if(arr_deleted_Hourly[i] == 1){
        continue;
    }
    cout<<"\n\n\t\t-------------Employee No. "<<number_of_employees<<" --------------"<<endl;
    if(arr_deleted_Hourly[i] == 1){
        continue;
    }
    HourlyEmployeeList[i].showData();
    number_of_employees++;
    }
    cout<<"\n\n\t\t----------------------- [Commission Employees] ---------------------"<<endl;
    for(int i=0;i<number_of_CommissionEmployees;i++){
    if(arr_deleted_Commission[i] == 1){
        continue;
    }
    cout<<"\n\n\t\t-------------Employee No. "<<number_of_employees<<" --------------"<<endl;
    if(arr_deleted_Commission[i] == 1){
        continue;
    }
    CommissionEmployeeList[i].showData();
    number_of_employees++;
    }
    cout<<"\n\n\t\t----------------------- [Salaried Employees] ---------------------"<<endl;
    for(int i=0;i<number_of_SalariedEmployees;i++){
    if(arr_deleted_Salaried[i] == 1){
        continue;
    }
    cout<<"\n\n\t\t-------------Employee No. "<<number_of_employees<<" --------------"<<endl;
    SalariedEmployeeList[i].showData();
    number_of_employees++;
    }
    cout<<"\n\n\t\t---------------------------- [Manager] ----------------------------"<<endl;
    for(int i=0;i<number_of_ManagerEmployees;i++){
    if(arr_deleted_Manager[i] == 1){
        continue;
    }
    cout<<"\n\n\t\t-------------Employee No. "<<number_of_employees<<" --------------"<<endl;
    ManagerEmployeeList[i].showData();
    number_of_employees++;
    }
    break;


}

}
void HRsys::SearchEmployees(){
    int search;
    cout<<"\n\n\t\t 1- Search By Name "<<endl;
    cout<<"\t\t 2- Search By ID "<<endl;
    cout<<"\t\t >>>> ";cin>>search;
    switch(search){
    case 1 :
{


          string name;
          cout<<"\t\tEnter Name : " ; cin>>name;
          bool isFound = false;
          for(int j=0;j<number_of_HourlyEmployees;j++){

          if(HourlyEmployeeList[j].getName() == name){
          cout <<"\t\tFound Successfully !"<<endl;
          HourlyEmployeeList[j].showData();  ////Edit all For with it.
          isFound = true;
          break;
               }
              }
          for(int j=0;j<number_of_HourlyEmployees;j++){

          if(CommissionEmployeeList[j].getName() == name){
          cout <<"\t\tFound Successfully !"<<endl;
          CommissionEmployeeList[j].showData();  ////Edit all For with it.
          isFound = true;
          break;
               }
              }
          for(int j=0;j<number_of_HourlyEmployees;j++){

          if(SalariedEmployeeList[j].getName() == name){
          cout <<"\t\tFound Successfully !"<<endl;
          SalariedEmployeeList[j].showData();  ////Edit all For with it.
          isFound = true;
          break;
               }
              }
          for(int j=0;j<number_of_HourlyEmployees;j++){

          if(ManagerEmployeeList[j].getName() == name){
          cout <<"\t\tFound Successfully !"<<endl;
          ManagerEmployeeList[j].showData();  ////Edit all For with it.
          isFound = true;
          break;
               }
              }
          if(isFound == false){
            cout<<"\t\t Didn't Find Name !"<<endl;
            break;
          }
          else{
          break;
          }
    }
case 2 :
{


          int ID;
          cout<<"\t\tEnter ID : " ; cin>>ID;
          bool isFound = false;
          for(int j=0;j<number_of_HourlyEmployees;j++){

          if(HourlyEmployeeList[j].getID() == ID){
          cout <<"\t\tFound Successfully !"<<endl;
          HourlyEmployeeList[j].showData();  ////Edit all For with it.
          isFound = true;
          break;
               }
              }
          for(int j=0;j<number_of_CommissionEmployees;j++){

          if(CommissionEmployeeList[j].getID() == ID){
          cout <<"\t\tFound Successfully !"<<endl;
          CommissionEmployeeList[j].showData();  ////Edit all For with it.
          isFound = true;
          break;
               }
              }
          for(int j=0;j<number_of_SalariedEmployees;j++){

          if(SalariedEmployeeList[j].getID() == ID){
          cout <<"\t\tFound Successfully !"<<endl;
          SalariedEmployeeList[j].showData();  ////Edit all For with it.
          isFound = true;
          break;
               }
              }
          for(int j=0;j<number_of_ManagerEmployees;j++){

          if(ManagerEmployeeList[j].getID() == ID){
          cout <<"\t\tFound Successfully !"<<endl;
          ManagerEmployeeList[j].showData();  ////Edit all For with it.
          isFound = true;
          break;
               }
              }
          if(isFound == false){
            cout<<"\t\t Didn't Find ID !"<<endl;
            break;
          }
          else{
          break;
          }


}

}
}
void HRsys::EditEmployees(){
cout<<"\t\t Edit Employee By ID "<<endl;
int ID;
int Edit;
          cout<<"\t\tEnter ID : " ; cin>>ID;
          bool isFound = false;
          for(int j=0;j<number_of_HourlyEmployees;j++){

          if(HourlyEmployeeList[j].getID() == ID){
          cout <<"\t\tFound Successfully !"<<endl;
          HourlyEmployeeList[j].showData();  ////Edit all For with it.
          isFound = true;
          /////Editing Area/////////
                int Edit;
                cout<<"\n\t\t ----------- Edit -----------"<<endl;
                cout<<"\t\t 1-ID "<<endl;
                cout<<"\t\t 2-Name "<<endl;
                cout<<"\t\t 3-Email "<<endl;
                cout<<"\t\t 4-Job Title "<<endl;
                cout<<"\t\t 5-Hours "<<endl;
                cout<<"\t\t 6-Add Hours "<<endl;
                cout<<"\t\t 7-Rate "<<endl;
                cout<<"\t\t 8-Salary "<<endl;
                cout<<"\t\t Enter a Number : "<<endl;
                cout<<"\t\t >>>> ";cin>>Edit;

            switch(Edit){
        case 1:
            {
            int newID;
            cout<<"\t\t Enter ID: "<<endl;
            cout<<"\t\t >>>> ";cin>>newID;
            HourlyEmployeeList[j].setID(newID);
            break;
            }
        case 2:
            {
            string newName;
            cout<<"\t\t Enter Name: "<<endl;
            cout<<"\t\t >>>> ";cin>>newName;
            HourlyEmployeeList[j].setName(newName);
            break;
            }
        case 3:
            {
            string newEmail;
            cout<<"\t\t Enter Email: "<<endl;
            cout<<"\t\t >>>> ";cin>>newEmail;
            HourlyEmployeeList[j].setEmail(newEmail);
            break;
            }
        case 4:
            {
            string newJob;
            cout<<"\t\t Enter Job title: "<<endl;
            cout<<"\t\t >>>> ";cin>>newJob;
            HourlyEmployeeList[j].setJobTitle(newJob);
            break;
            }
        case 5:
            {
            double newHours;
            cout<<"\t\t Enter Hours: "<<endl;
            cout<<"\t\t >>>> ";cin>>newHours;
            HourlyEmployeeList[j].setHoursWorked(newHours);
            break;
            }
        case 6:
            {
            double addHours;
            cout<<"\t\t Enter Hours: "<<endl;
            cout<<"\t\t >>>> ";cin>>addHours;
            HourlyEmployeeList[j].addHours(addHours);
            break;
            }
        case 7:
            {
            double newRate;
            cout<<"\t\t Enter Rate: "<<endl;
            cout<<"\t\t >>>> ";cin>>newRate;
            HourlyEmployeeList[j].setrate(newRate);
            break;
            }
        case 8:
            {

            double newSalary;
            cout<<"\t\t Enter Salary: "<<endl;
            cout<<"\t\t >>>> ";cin>>newSalary;
            HourlyEmployeeList[j].setSalary(newSalary);
            break;
            }
            }
          break;
               }
              }
          for(int j=0;j<number_of_CommissionEmployees;j++){

          if(CommissionEmployeeList[j].getID() == ID){
          cout <<"\t\tFound Successfully !"<<endl;
          CommissionEmployeeList[j].showData();  ////Edit all For with it.
          isFound = true;
          /////Editing Area/////////
                cout<<"\n\t\t ----------- Edit -----------"<<endl;
                cout<<"\t\t 1-ID "<<endl;
                cout<<"\t\t 2-Name "<<endl;
                cout<<"\t\t 3-Email "<<endl;
                cout<<"\t\t 4-Job Title "<<endl;
                cout<<"\t\t 5-Salary "<<endl;
                cout<<"\t\t 6-Rate "<<endl;
                cout<<"\t\t 7-Target "<<endl;
                cout<<"\t\t Enter a Number : "<<endl;
                cout<<"\t\t >>>> ";cin>>Edit;
            switch(Edit){
        case 1:
            {
            int newID;
            cout<<"\t\t Enter ID: "<<endl;
            cout<<"\t\t >>>> ";cin>>newID;
            CommissionEmployeeList[j].setID(newID);
            break;
            }
        case 2:
            {
            string newName;
            cout<<"\t\t Enter Name: "<<endl;
            cout<<"\t\t >>>> ";cin>>newName;
            CommissionEmployeeList[j].setName(newName);
            break;
            }
        case 3:
            {
            string newEmail;
            cout<<"\t\t Enter Email: "<<endl;
            cout<<"\t\t >>>> ";cin>>newEmail;
            CommissionEmployeeList[j].setEmail(newEmail);
            break;
            }
        case 4:
            {
            string newJob;
            cout<<"\t\t Enter Job title: "<<endl;
            cout<<"\t\t >>>> ";cin>>newJob;
            CommissionEmployeeList[j].setJobTitle(newJob);
            break;
            }
        case 5:
            {
            double newSalary;
            cout<<"\t\t Enter Salary: "<<endl;
            cout<<"\t\t >>>> ";cin>>newSalary;
            CommissionEmployeeList[j].setSalary(newSalary);
            break;
            }
        case 6:
            {
            double newRate;
            cout<<"\t\t Enter Rate: "<<endl;
            cout<<"\t\t >>>> ";cin>>newRate;
            CommissionEmployeeList[j].setrate(newRate);
            break;
            }
        case 7:
            {
            double newTarget;
            cout<<"\t\t Enter Target: "<<endl;
            cout<<"\t\t >>>> ";cin>>newTarget;
            CommissionEmployeeList[j].settarget(newTarget);
            break;
            }

            }
          break;
               }
              }
          for(int j=0;j<number_of_SalariedEmployees;j++){

          if(SalariedEmployeeList[j].getID() == ID){
          cout <<"\t\tFound Successfully !"<<endl;
          SalariedEmployeeList[j].showData();  ////Edit all For with it.
          isFound = true;
                    /////Editing Area/////////
                cout<<"\n\t\t ----------- Edit -----------"<<endl;
                cout<<"\t\t 1-ID "<<endl;
                cout<<"\t\t 2-Name "<<endl;
                cout<<"\t\t 3-Email "<<endl;
                cout<<"\t\t 4-Job Title "<<endl;
                cout<<"\t\t 5-Salary "<<endl;
                cout<<"\t\t Enter a Number : "<<endl;
                cout<<"\t\t >>>> ";cin>>Edit;

            switch(Edit){
        case 1:
            {
            int newID;
            cout<<"\t\t Enter ID: "<<endl;
            cout<<"\t\t >>>> ";cin>>newID;
            SalariedEmployeeList[j].setID(newID);
            break;
            }
        case 2:
            {
            string newName;
            cout<<"\t\t Enter Name: "<<endl;
            cout<<"\t\t >>>> ";cin>>newName;
            SalariedEmployeeList[j].setName(newName);
            break;
            }
        case 3:
            {
            string newEmail;
            cout<<"\t\t Enter Email: "<<endl;
            cout<<"\t\t >>>> ";cin>>newEmail;
            SalariedEmployeeList[j].setEmail(newEmail);
            break;
            }
        case 4:
            {
            string newJob;
            cout<<"\t\t Enter Job title: "<<endl;
            cout<<"\t\t >>>> ";cin>>newJob;
            SalariedEmployeeList[j].setJobTitle(newJob);
            break;
            }
        case 5:
            {
            double newSalary;
            cout<<"\t\t Enter Salary: "<<endl;
            cout<<"\t\t >>>> ";cin>>newSalary;
            SalariedEmployeeList[j].setSalary(newSalary);
            break;
            }

            }
          break;
               }
              }
          for(int j=0;j<number_of_ManagerEmployees;j++){

          if(ManagerEmployeeList[j].getID() == ID){
          cout <<"\t\tFound Successfully !"<<endl;
          ManagerEmployeeList[j].showData();  ////Edit all For with it.
          isFound = true;
                    /////Editing Area/////////
                cout<<"\n\t\t ----------- Edit -----------"<<endl;
                cout<<"\t\t 1-ID "<<endl;
                cout<<"\t\t 2-Name "<<endl;
                cout<<"\t\t 3-Email "<<endl;
                cout<<"\t\t 4-Job Title "<<endl;
                cout<<"\t\t 5-Salary "<<endl;
                cout<<"\t\t 6-Add Bonus "<<endl;
                cout<<"\t\t Enter a Number : "<<endl;
                cout<<"\t\t >>>> ";cin>>Edit;

            switch(Edit){
        case 1:
            {
            int newID;
            cout<<"\t\t Enter ID: "<<endl;
            cout<<"\t\t >>>> ";cin>>newID;
            ManagerEmployeeList[j].setID(newID);
            break;
            }
        case 2:
            {
            string newName;
            cout<<"\t\t Enter Name: "<<endl;
            cout<<"\t\t >>>> ";cin>>newName;
            ManagerEmployeeList[j].setName(newName);
            break;
            }
        case 3:
            {
            string newEmail;
            cout<<"\t\t Enter Email: "<<endl;
            cout<<"\t\t >>>> ";cin>>newEmail;
            ManagerEmployeeList[j].setEmail(newEmail);
            break;
            }
        case 4:
            {
            string newJob;
            cout<<"\t\t Enter Job title: "<<endl;
            cout<<"\t\t >>>> ";cin>>newJob;
            ManagerEmployeeList[j].setJobTitle(newJob);
            break;
            }
        case 5:
            {
            double newSalary;
            cout<<"\t\t Enter Salary: "<<endl;
            cout<<"\t\t >>>> ";cin>>newSalary;
            ManagerEmployeeList[j].setSalary(newSalary);
            break;
            }
        case 6:
            {
            double addBonus;
            cout<<"\t\t Enter Salary: "<<endl;
            cout<<"\t\t >>>> ";cin>>addBonus;
            ManagerEmployeeList[j].addBonus(addBonus);
            break;
            }

            }
          break;
               }
              }
          if(isFound == false){
            cout<<"\t\t Didn't Find ID !"<<endl;

          }



}
void HRsys::DeleteEmployees(){
          cout<<"\t\t [Delete Employee By ID] "<<endl;
          int ID;
          cout<<"\t\tEnter ID : " ; cin>>ID;
          bool isFound = false;
          for(int j=0;j<number_of_HourlyEmployees;j++){

          if(HourlyEmployeeList[j].getID() == ID){
          arr_deleted_Hourly[j] = 1;
          cout <<"\t\tDeleted Successfully !"<<endl;
          isFound = true;
          break;
               }
              }
          for(int j=0;j<number_of_CommissionEmployees;j++){

          if(CommissionEmployeeList[j].getID() == ID){
          cout <<"\t\tFound Successfully !"<<endl;
          arr_deleted_Commission[j] = 1;
          isFound = true;
          break;
               }
              }
          for(int j=0;j<number_of_SalariedEmployees;j++){

          if(SalariedEmployeeList[j].getID() == ID){
          cout <<"\t\tFound Successfully !"<<endl;
          arr_deleted_Salaried[j] = 1;
          isFound = true;
          break;
               }
              }
          for(int j=0;j<number_of_ManagerEmployees;j++){

          if(ManagerEmployeeList[j].getID() == ID){
          cout <<"\t\tFound Successfully !"<<endl;
          arr_deleted_Manager[j] = 1;
          isFound = true;
          break;
               }
              }
          if(isFound == false){
            cout<<"\t\t Didn't Find ID !"<<endl;
          }



}

HRsys::~HRsys(){
delete [] HourlyEmployeeList;
delete [] CommissionEmployeeList;
delete [] SalariedEmployeeList;
delete [] ManagerEmployeeList;
}
