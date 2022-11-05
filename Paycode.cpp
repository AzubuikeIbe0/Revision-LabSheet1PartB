#include "Paycode.h"

double Paycode::calcSalary()
{
	std::cout << "Enter your paycode to get your salary or -1 to Quit the program" << endl;
	std::cin >> paycode;

	do
	{
		switch (paycode)
		{
		case 1:
			std::cout << "You are a Manager" << endl;
			std::cout << "Enter the number of weeks you worked: " << endl;
			std::cin >> weeksWorked;
			salary = weeksWorked * fixedWklySalary;
			std::cout << "Your salary is: " << salary << endl;
			break;

		case 2:
			std::cout << "You are an Hourly paid worker" << endl;
			std::cout << "Enter the number of hours you worked: " << endl;
			std::cin >> hrsWorked;
			std::cout << "Enter the number of extra hours you worked: " << endl;
			std::cin >> extraHours;
			salary = (fixedHrlySalary * hrsWorked) + (extraHours * 1.5);
			std::cout << "Your salary is: " << salary << endl;
			break;

		case 3:
			std::cout << "You are a Sales Staff" << endl;
			std::cout << "Enter the number of days you worked: " << endl;
			std::cin >> daysWorked;
			std::cout << "Enter the amount of Gross Weekly sales you made: " << endl;
			std::cin >> grossWklySales;
			salary = (daysWorked * 250) + (grossWklySales * 5.7 / 100);
			std::cout << "Your salary is: " << salary << endl;
			break;

		case 4:
			std::cout << "You are a Production Line Staff" << endl;
			std::cout << "Enter the number Items of you produced: " << endl;
			std::cin >> numItemsProduced;
			salary = numItemsProduced * amountPerItemProduced;
			std::cout << "Your salary is: " << salary << endl;
			break;

		default:
			if (paycode < -1 || paycode > 4)
			{
				std::cout << "Error: Invalid Paycode" << endl;
			}

			break;
		}

		std::cout << "Enter your paycode to get your salary or -1 to Quit the program" << endl;
		std::cin >> paycode;

	} while (paycode != -1);

	return salary;
}