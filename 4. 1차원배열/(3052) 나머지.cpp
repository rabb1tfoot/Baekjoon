#include <iostream>
#include <algorithm>
#include <vector>
#include <set>


int main(){
    int input;
	std::set<int> set;
	for (int i = 0; i < 10; ++i) {
		std::cin >> input;
		set.insert(input % 42);
	}
	std::cout << set.size();
	return 0;
}