#include "ShiftSupervisor.h"
#include <iostream>

ShiftSupervisor::ShiftSupervisor(string e_name = " ", int e_num = 0, string H_date = " ", int a_sal = 0, int a_bon = 0)
	:Employee(e_name, e_num, H_date)
{
	AnnSalary = a_sal;
	AnnBonus = a_bon;
}
