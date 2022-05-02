#include <iostream>

// 0, 1, 1, 2, 3, 5, 8, 13 ...

int fibonacci(int num)
{
	if (num == 1)
	{
		return 0;
	}
	else if (num == 2)
	{
		return 1;
	}
	else
	{
		return fibonacci(num - 2) + fibonacci(num - 1);
	}
}

int main()
{
	int num = 0;
	std::cout << "ют╥б: ";
	std::cin >> num;
	std::cout << std::endl;

	for (int i = 1; i <= num; i++)
	{
		std::cout << fibonacci(i);
		if (num != 1 && i != num)
		{
			std::cout << ", ";
		}
	}
	std::cout << std::endl;

	return 0;
}