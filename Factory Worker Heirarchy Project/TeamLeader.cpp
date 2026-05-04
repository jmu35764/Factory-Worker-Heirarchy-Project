#include "TeamLeader.h"

#include <iostream>
#include <iomanip>

TeamLeader::TeamLeader(string e_name, int e_num, string H_date, int s, double h_pay,
						double m_bon, int rth, int ath)
						: ProductionWorker(e_name, e_num, H_date, s, h_pay)
{
	MonthBonus = m_bon;
	RegTrainingHours = rtg;

}
