#include <iostream>
#include <string>

int main()
{
	std::string actorName;
	std::getline(std::cin, actorName);
	double points;
	std::cin >> points;
	int judges;
	std::cin >> judges;
	std::cin.ignore();

	for (int i = 0; i < judges; i++)
	{
		std::string judge;
		std::getline(std::cin, judge);
		double judgePoints;
		std::cin >> judgePoints;
		std::cin.ignore();

		double totalJudgePoints = (judgePoints * judge.length()) / 2;
		points += totalJudgePoints;

		if (points > 1250.5)
		{
			break;
		}

	}

	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);

	if (points > 1250.5)
	{
		std::cout << "Congratulations, "
			<< actorName
			<< " got a nominee for leading role with "
			<< points << "!";
	}
	else
	{
		std::cout << "Sorry, "
			<< actorName
			<< " you need "
			<< 1250.5 - points << " more!";
	}

	return 0;
}