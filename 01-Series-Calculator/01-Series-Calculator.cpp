#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::string	movie;
	std::getline(std::cin, movie);
	int season, episodes;
	std::cin >> season >> episodes;
	double timePerEpisode;
	std::cin >> timePerEpisode;

	double adsTime = 0.2 * timePerEpisode;
	double timeEpisodePlusAds = adsTime + timePerEpisode;
	int specialTime = season * 10;

	double totalTime = season * (episodes * timeEpisodePlusAds) + specialTime;

	std::cout << "Total time needed to watch the "
		<< movie << " series is "
		<< floor(totalTime) << " minutes." << std::endl;



	return 0;
}