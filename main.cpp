#include <iostream>
#include <stdlib.h>
#include <string>
#include <unistd.h>
#include "HRsys.h"
using namespace std;

int main()
{
    int choose;
    char ch;
    HRsys a;
    cout<<"\n \t\t\t\t-------------  [ HR Management Sys ]  -------------"<<endl;
    cout<<"\t\t\t\t\t>>>>  [+] Mohamed Amin Project   <<<< "<<endl;
    cout<<"\t\t\t\t\t     >>>>      [FCI_ZU]      <<<< "<<endl;
    do{
    cout<<"\n\n\t\t--------------------  Welcome ! ---------------"<<endl;
    cout<<"\t\t 1- Add Employee "<<endl;
    cout<<"\t\t 2- Delete Employee "<<endl;
    cout<<"\t\t 3- Show All Employees "<<endl;
    cout<<"\t\t 4- Edit Employee "<<endl;
    cout<<"\t\t 5- Search For Employee "<<endl;
    cout<<"\t\t 6- Exit "<<endl;
    cout<<"\t\t >>>> ";cin>>choose;
    switch(choose){
    case 1 :
    cout<<"\t\t\t --------------- New Employee ---------------"<<endl;
    cout<<""; a.AddEmployee();
    cout<<"\t\t\t\t ---> Wait for 3 Seconds <--- "<<endl;
    sleep(6);
    system("cls");
    break;
    case 2 :
    cout<<"\t\t\t --------------- Delete Employee ---------------"<<endl;
    cout<<"\t\t "; a.DeleteEmployees();
    cout<<"\t\t\t\t ---> Wait for 3 Seconds <--- "<<endl;
    sleep(6);
    system("cls");
    break;
    case 3 :
    cout<<"\t\t\t --------------- Show Employees ---------------"<<endl;
    cout<<"\t\t "; a.ShowEmployees();
    system("pause");
    cout<<"\n\t\t\t\t ---> Wait <--- "<<endl;
    sleep(2);
    system("cls");
    break;
    case 4 :
    cout<<"\t\t\t --------------- Edit Employee ---------------"<<endl;
    cout<<"\t\t "; a.EditEmployees();
    cout<<"\t\t\t\t ---> Wait for 3 Seconds <--- "<<endl;
    sleep(3);
    system("cls");
    break;
    case 5 :
    cout<<"\t\t\t --------------- Search For Employee ---------------"<<endl;
    cout<<"\t\t "; a.SearchEmployees();
    cout<<"\t\t\t\t ---> Wait for 3 Seconds <--- "<<endl;
    sleep(3);
    system("cls");
    break;
    }
    }while(choose != 6);
    cout<<"\t\tThanks For Using My Program ! .. This Was Project For FCI Zagazig University  "<<
    "\n\t\tCopyrights Reserved to Mohamed Amin <3 "<<
    "\n\t\tKindly Visit My GitHub : https://github.com/maq77/ "<<
    "\n\t\tUsername: maq77 "<<endl;
    return 0;
}
