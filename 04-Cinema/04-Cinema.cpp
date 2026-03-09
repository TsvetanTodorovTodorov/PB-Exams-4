#include <iostream>
#include <string>
#include <climits>

int main()
{
	int seats;
	std::cin >> seats;
	std::cin.ignore();

	std::string command;
	std::getline(std::cin, command);

	int income = 0;

	while (command != "Movie time!")
	{
		int people = stoi(command);
		if (seats - people < 0)
		{
			std::cout << "The cinema is full.\n";
			break;
		}
		else
		{
			seats -= people;
		}

		income += people * 5;

		if (people % 3 == 0)
		{
			income -= 5;
		}

		std::getline(std::cin, command);
	}

	if (command == "Movie time!")
	{
		std::cout << "There are " << seats << " seats left in the cinema.\n";
	}

	std::cout << "Cinema income - " << income << " lv.";

	return 0;
}