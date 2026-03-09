#include <iostream>

int main()
{
	double budget;
	std::cin >> budget;
	std::string destination, season;
	std::cin >> destination >> season;
	int days;
	std::cin >> days;

	double shooting = 0.0;

	if (destination == "Dubai")
	{
		if (season == "Winter")
		{
			shooting = 45000.00 * days;
		}
		else if (season == "Summer")
		{
			shooting = 40000.00 * days;
		}
		shooting *= 0.7;
	}
	else if (destination == "Sofia")
	{
		if (season == "Winter")
		{
			shooting = 17000.00 * days;
		}
		else if (season == "Summer")
		{
			shooting = 12500.00 * days;
		}
		// shooting += 0.25 * shooting;
		shooting *= 1.25;
	}
	else if (destination == "London")
	{
		if (season == "Winter")
		{
			shooting = 24000.00 * days;
		}
		else if (season == "Summer")
		{
			shooting = 20250.00 * days;
		}
	}

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);

	if (budget >= shooting)
	{
		std::cout << "The budget for the movie is enough! We have "
			<< budget - shooting << " leva left!";
	}
	else
	{
		std::cout << "The director needs " << shooting - budget
			<< " leva more!";
	}

	return 0;
}