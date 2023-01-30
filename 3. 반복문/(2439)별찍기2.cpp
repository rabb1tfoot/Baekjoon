#include <iostream>
#include <array>
#include <string>

int main()
{
	int num;
	std::cin >> num;

	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < num - i; j++)
			std::cout << ' ';
		for (int k = 0; k<i; k++)
			std::cout << '*';
		std::cout << '\n';
	}

    return 0;
}

