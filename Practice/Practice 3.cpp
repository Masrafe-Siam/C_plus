#include<iostream>
using namespace std;
 int main()
 {
     double basic_salary,dearness_allowance,house_rent,gross_salary;
     cout << "Enter the salary :";
     cin>> basic_salary;
     dearness_allowance=0.4*basic_salary;
	house_rent=0.2*basic_salary;
	gross_salary=basic_salary-dearness_allowance-house_rent;
	cout<< "Gross_Salary is :"<< gross_salary << endl;
 }
