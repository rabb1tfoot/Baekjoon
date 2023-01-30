#include <iostream>
#include <algorithm>
#include <vector>


int main(){
std::vector<int> students;
	int num;
	int input;
	int max = 1;
	float sum = 0;
	std::vector<int> scores;

	std::cin >> num;
	for (int i = 0; i < num; ++i) {
		std::cin >> input;
		scores.emplace_back(input);
		if (max < input) {
			max = input;
		}
	}
	for (int i = 0; i < num; ++i) {
		sum += (float)scores[i] / max * 100;
	}
	std::cout << sum / num;
}