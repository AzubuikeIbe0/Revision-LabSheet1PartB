#pragma once
#include <iostream>
using namespace std;

class Paycode
{
private:
	string Managers;
	string HrlyPaidWorkers;
	string SalesStaff;
	string ProductionLineStaff;

	int paycode;
	double fixedHrlySalary = 10.0;
	double fixedWklySalary = 200.0;
	double hrsWorked;
	double daysWorked;
	double weeksWorked;
	double salary;
	double extraHours;
	double grossWklySales;
	int numItemsProduced;
	double amountPerItemProduced = 20.0;

public:
	double calcSalary();

};
