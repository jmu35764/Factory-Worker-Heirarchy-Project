#include "ShiftSupervisor.h"

#include <iostream>
#include <string>

using namespace std;

ShiftSupervisor::ShiftSupervisor(string e_name = " ", int e_num = 0, string H_date = " ", int a_sal = 0, int a_bon = 0)
{
	AnnSalary = a_sal;
	AnnBonus = a_bon;
}
