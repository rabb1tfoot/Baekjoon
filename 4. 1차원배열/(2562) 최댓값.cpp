#include <iostream>
#include <algorithm>
#include <vector>


int main(){
int max = 0;
	int index = 0;
	int input;
	for (int i = 0; i < 9; ++i) {
		std::cin >> input;
		if (input > max) {
			index = i + 1;
			max = input;
		}
	}
	std::cout << max<<std::endl;
	std::cout << index;
    return 0;
}