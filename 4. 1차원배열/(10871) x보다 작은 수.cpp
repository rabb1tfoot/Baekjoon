#include <iostream>
#include <algorithm>
#include <vector>


int main(){
int num; int less;
	int input;

	std::cin >> num >> less;

	for (int i = 0; i < num; ++i) {
		std::cin >> input;
		if (input < less) {
			std::cout << input << " ";
		}
	}

    return 0;
}