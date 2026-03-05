#include <iostream>
#include <string>

int main()
{
	std::string movie;
	std::getline(std::cin, movie);
	int days, tickets;
	std::cin >> days >> tickets;
	double ticketPrice;
	std::cin >> ticketPrice;
	double percentage;
	std::cin >> percentage;

	double income = days * (tickets * ticketPrice);
	income -= (percentage / 100) * income;

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);

	std::cout << "The profit from the movie " << movie
		<< " is " << income << " lv." << std::endl;

	return 0;
}