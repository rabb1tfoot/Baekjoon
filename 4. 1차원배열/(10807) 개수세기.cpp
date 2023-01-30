#include <iostream>
#include <algorithm>
#include <vector>


int main(){
int num;
	int input;
	int findNum;
	int count = 0;
	std::vector<int> arrNum;
	std::cin >> num;

	for (int i = 0; i < num; ++i) {
		std::cin >> input;
		arrNum.emplace_back(input);
	}
	std::cin >> findNum;
	auto it = arrNum.begin();
	while (true)
	{
		it = std::find(it, arrNum.end(), findNum);
		if (it == arrNum.end()) {
			break;
		}
		it = it + 1;
		count++;

	}
	std::cout << count << std::endl;

    return 0;
}