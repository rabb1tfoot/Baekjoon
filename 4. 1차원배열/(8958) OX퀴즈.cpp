#include <iostream>
#include <algorithm>
#include <vector>


int main(){
int num;
	std::string report;
	std::cin >> num;
	for (int i = 0; i < num; ++i) {
		std::cin >> report;
		int score = 0;
		int stack = 1;
		for (char word : report) {
			if (word == 'O') {
				score += (1 * stack);
				stack++;
			}
			else {
				stack = 1;
			}
		}
		std::cout << score << std::endl;
	}
}