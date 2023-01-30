#include <iostream>
#include <array>
#include <string>

int main()
{
	int num;
	std::cin >> num;

	for (int i = 0; i < num; ++i) {
		int input1; int input2;
		std::cin >> input1 >> input2;
		std::cout << "Case #"<< i+1 <<": " << input1<<" + "<<input2<<" = " <<input1 + input2 << std::endl;
	}

    return 0;
}

