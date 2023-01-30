#include <iostream>
#include <array>
#include <string>

int main()
{
	int num;
	std::cin >> num;

	for (int i = 0; i < num; ++i) {
		for (int j = 0; j <= i; ++j) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

    return 0;
}

