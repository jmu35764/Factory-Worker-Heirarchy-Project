#include <iostream>
#include <iomanip>
#include <string>


#include "Employee.h"
#include "ProductionWorker.h"


int main()
{
	Employee Emp("John", 1234, "10 / 05 / 2001");

	Emp.printEmpInfo();

	ProductionWorker pw("Mason", 1001, "11/11/2011", 2, 23.00);

	pw.printProdWorkInfo();
}