#include <iostream>

int main()
{
	int a1, a2, n;
	std::cin >> a1 >> a2 >> n;

	for (int i = a1; i <= a2 - 1; i++)
	{
		char symbol1 = i;
		if (i % 2 != 0)
		{
			//std::cout << symbol1 << std::endl;
			for (int j = 1; j <= n - 1; j++)
			{
				for (int k = 1; k <= (n / 2) - 1; k++)
				{
					int num = j + k + i;
					if (num % 2 != 0)
					{
						std::cout << symbol1 << "-"
							<< j << k << i
							<< std::endl;
					}
				}
			}
		}
	}
	return 0;
}