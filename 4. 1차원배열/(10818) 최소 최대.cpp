#include <iostream>
#include <algorithm>
#include <vector>


int main(){
int num; int min = 1000001; int max = -1000001;
	int input;

	std::cin >> num;

	for (int i = 0; i < num; ++i) {
		std::cin >> input;
		if (input > max) {
			max = input;
		}
		if (input < min) {
			min = input;
		}
	}
	std::cout << min << " " << max;
    return 0;
}