#include <iostream>
#include <string>

int main()
{
	std::string movie;
	std::getline(std::cin, movie);

	int bestPoints = 0;
	std::string bestMovie = "";
	int counter = 0;

	while (movie != "STOP")
	{
		int currMoviePoints = 0;

		for (int i = 0; i < movie.length(); i++)
		{

			int ascii = movie[i];
			if (ascii >= 65 && ascii <= 90)
			{
				currMoviePoints += ascii - movie.length();
			}
			else if (ascii >= 97 && ascii <= 122)
			{
				currMoviePoints += ascii - (2 * movie.length());
			}
			else
			{
				currMoviePoints += ascii;
			}
		}

		if (currMoviePoints > bestPoints)
		{
			bestPoints = currMoviePoints;
			bestMovie = movie;
		}

		counter++;
		if (counter == 7)
		{
			std::cout << "The limit is reached.\n";
			break;
		}
		std::getline(std::cin, movie);
	}

	std::cout << "The best movie for you is "
		<< bestMovie << " with " << bestPoints
		<< " ASCII sum.";

	return 0;
}