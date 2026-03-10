#include <iostream>
#include <string>

int main()
{
	double budget;
	std::cin >> budget;
	int series;
	std::cin >> series;
	std::cin.ignore();

	std::string movie;
	double price;

	double totalPrice = 0.0;
	
	for (int i = 1; i <= series; i++)
	{
		std::getline(std::cin, movie);
		std::cin >> price;
		std::cin.ignore();

		if (movie == "Thrones")
		{
			price *= 0.5;
		}
		else if (movie == "Lucifer")
		{
			price *= 0.6;
		}
		else if (movie == "Protector")
		{
			price *= 0.7;
		}
		else if (movie == "TotalDrama")
		{
			price *= 0.8;
		}
		else if (movie == "Area")
		{
			price *= 0.9;
		}
		totalPrice += price;
	}

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);

	if (budget >= totalPrice)
	{
		std::cout << "You bought all the series and left with "
			<< budget - totalPrice << " lv.";
	}
	else
	{
		std::cout << "You need " << totalPrice - budget
			<< " lv. more to buy the series!";
	}

	return 0;
}