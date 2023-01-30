#include <iostream>
#include <algorithm>
#include <vector>


int main(){
std::array<int, 31> check{ 0, };
	int input;
	for (int i = 0; i < 28; ++i) {
		std::cin >> input;
		check[input] = 1;
	}
	for (int i = 1; i <= 30; ++i) {
		if (check[i] == 0) {
			std::cout << i << std::endl;
		}
	}
	return 0;
}