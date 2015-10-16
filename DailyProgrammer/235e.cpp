#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	while (N--)
	{
		int pair[2];
		int factorSums[2] = { 0, 0 };
		std::cin >> pair[0];
		std::cin >> pair[1];
		std::cout << "(" << pair[0] << ", " << pair[1] << ") ";
		// sum factors
		for (int i = 0; i < 2; i++)
		{
			int num = pair[i]; // current number to work with
			for (int j = 2; j <= pair[i]; j++)
			{
				if (num % j == 0)
				{
					factorSums[i] += j;
					num /= j;
				}
			}
		}
		if (factorSums[0] == factorSums[1] && pair[0] + 1 == pair[1])
		{
			std::cout << "VALID\n";
		}
		else
		{
			std::cout << "INVALID\n";
		}
	}
	system("pause");
	return 0;
}