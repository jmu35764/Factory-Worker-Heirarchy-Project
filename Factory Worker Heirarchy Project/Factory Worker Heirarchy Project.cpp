#include <iostream>
#include <iomanip>
#include <string>


#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"


int main()
{
	//****** EMPLOYEE CLASS TEST ******//

	cout << "EMPLOYEE CLASS TEST" << endl;
	
	Employee Emp("John", 1234, "10 / 05 / 2001");

	Emp.printEmpInfo();

	Emp.setName("Miles Morales");
	Emp.setEmpNum(5678);
	Emp.setHireDate("06/06/2001");


	cout << "New Employee Name: " <<Emp.getName() << endl;
	cout << "New Employee Number: " << Emp.getEmpNum() << endl;
	cout << "New Empoyee Hire Date: " << Emp.getHireDate() << endl;


	cout << endl;
	Emp.printEmpInfo();

	ProductionWorker pw("Mason", 1001, "11/11/2011", 2, 23.00);

	cout << endl;
	pw.printProdWorkInfo();

	ShiftSupervisor ss("Andrew Myers", 2020, "04/15/2016", 4000.00, 500.00);

	cout << endl;
	ss.printShiftSupInfo();

	TeamLeader tl("Jason James", 1984, "02/24/2010", 1, 35.00, 0.5, 30, 25);
	cout << endl;
	tl.printTeamLeaderInfo();

}