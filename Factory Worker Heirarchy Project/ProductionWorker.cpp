#include "ProductionWorker.h"
#include <iostream>

ProductionWorker :: ProductionWorker(string e_name, int e_num, string H_date, int s, double h_pay)
{
	Emp_Name = e_name;
	Emp_Num = e_num;
	Hire_date = H_date;
	shift = s;
	hourly_pay = h_pay;

}
