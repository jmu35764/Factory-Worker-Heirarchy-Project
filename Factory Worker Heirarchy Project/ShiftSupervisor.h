#ifndef SHIFTSUPERVISORH
#define SHIFTSUPERVISOR_H

#include <string>

#include "Employee.h"

class ShiftSupervisor
{
private:
	int AnnSalary;
	int AnnBonus;

public:
	// Constructor
	ShiftSupervisor(string e_name = " ", int e_num = 0, string H_date = " ", int a_sal = 0, int a_bon = 0);

	//Setters
	void setAnnSalary(int a_sal);

	void setAnnBonus(int a_bon);

	//Getters
	int getAnnSalary() const
	{
		return AnnSalary;
	}

	int getAnnBonus() const
	{
		return AnnBonus;
	}

	void printShiftSupInfo() const;

};


#endif
