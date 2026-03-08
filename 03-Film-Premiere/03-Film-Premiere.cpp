#include <iostream>
#include <string>

int main()
{
	std::string movie;
	std::getline(std::cin, movie);
	std::string package;
	std::cin >> package;
	int tickets;
	std::cin >> tickets;

	double bill = 0.0;


	if (movie == "John Wick")
	{
		if (package == "Drink")
		{
			bill = 12.00 * tickets;
		}
		else if (package == "Popcorn")
		{
			bill = 15.00 * tickets;
		}
		else if (package == "Menu")
		{
			bill = 19.00 * tickets;
		}
	}
	else if (movie == "Star Wars")
	{
		if (package == "Drink")
		{
			bill = 18.00 * tickets;
		}
		else if (package == "Popcorn")
		{
			bill = 25.00 * tickets;
		}
		else if (package == "Menu")
		{
			bill = 30.00 * tickets;
		}
	}
	else if (movie == "Jumanji")
	{
		if (package == "Drink")
		{
			bill = 9.00 * tickets;
		}
		else if (package == "Popcorn")
		{
			bill = 11.00 * tickets;
		}
		else if (package == "Menu")
		{
			bill = 14.00 * tickets;
		}
	}

	if (movie == "Star Wars" && tickets >= 4)
	{
		bill *= 0.7;
	}
	else if (movie == "Jumanji" && tickets == 2)
	{
		bill *= 0.85;
	}

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);
	std::cout << "Your bill is " << bill << " leva.\n";

	return 0;
}
