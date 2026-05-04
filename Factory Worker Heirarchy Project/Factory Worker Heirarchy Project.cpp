#include <iostream>
#include <iomanip>
#include <string>


#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"


int main()
{
	Employee Emp("John", 1234, "10 / 05 / 2001");

	cout << endl;
	Emp.printEmpInfo();

	ProductionWorker pw("Mason", 1001, "11/11/2011", 2, 23.00);

	cout << endl;
	pw.printProdWorkInfo();

	ShiftSupervisor ss("Andrew Myers", 2020, "04/15/2016", 4000.00, 500.00);

	cout << endl;
	ss.printShiftSupInfo();

}