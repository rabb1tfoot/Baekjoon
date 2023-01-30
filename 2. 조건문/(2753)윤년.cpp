#include <iostream>

int main(){

    int num1;
	std::cin >> num1;

	if (num1 % 4 == 0 && num1 % 100 != 0) {
		std::cout << '1';
	}
	else if (num1 % 400 == 0) {
		std::cout << '1';
	}
	else {
		std::cout << '0';
	}
    return 0;
}