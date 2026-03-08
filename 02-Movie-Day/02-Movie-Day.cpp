#include <iostream>
#include <cmath>

int main()
{
	double time;
	std::cin >> time;
	int scenes, timeForScene;
	std::cin >> scenes >> timeForScene;

	double preparation = time * 0.15;

	double timeForScenes = scenes * timeForScene;

	double totalTime = preparation + timeForScenes;

	//double difference = abs(time - totalTime);
	if (totalTime <= time)
	{
		std::cout << "You managed to finish the movie on time! You have "
			<< round(time - totalTime) << " minutes left!" << std::endl;
	}
	else
	{
		std::cout << "Time is up! To complete the movie you need "
			<< totalTime - time << " minutes." << std::endl;
	}

	return 0;
}