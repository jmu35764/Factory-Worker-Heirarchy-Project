#include "ProductionWorker.h"

#include <iostream>
#include <iomanip>

using namespace std;

ProductionWorker :: ProductionWorker(int s, double h_pay) : Employee()
{
	shift = s;
	hourly_pay = h_pay;
}

void ProductionWorker::setShift(int s)
{
	shift = s;
}

void ProductionWorker::setPayRate(double h_pay)
{
	hourly_pay = h_pay;
}

void ProductionWorker::printProdWorkInfo() const
{
	printEmpInfo();

	cout << left << setw(18) << "Shift: ";

		if (shift == 1)
		{
			cout << "Day " << endl;
		}

		else
		{
			cout << "Night" << endl;
		}

		cout << left << setw(18) << "Hourly Pay Rate: $" << hourly_pay << endl;
}