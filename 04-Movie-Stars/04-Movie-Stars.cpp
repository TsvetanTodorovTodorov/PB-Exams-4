#include <iostream>
#include <string>

int main()
{
	double budget;
	std::cin >> budget;
	std::cin.ignore();

	std::string actorName;
	std::getline(std::cin, actorName);

	double salary = 0.0;

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);

	while (actorName != "ACTION")
	{
		if (actorName.length() > 15)
		{
			salary = 0.2 * budget;
		}
		else
		{
			std::cin >> salary;
			std::cin.ignore();
		}
		if (salary > budget)
		{
			std::cout << "We need " << salary - budget
				<< " leva for our actors.";
			return 0;
		}
		else
		{
			budget -= salary;
		}

		std::getline(std::cin, actorName);
	}

	std::cout << "We are left with " << budget
		<< " leva.";

	return 0;
}