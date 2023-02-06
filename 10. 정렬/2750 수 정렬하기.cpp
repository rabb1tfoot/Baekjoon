#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        vec.emplace_back(num);
    }
    std::sort(vec.begin(), vec.end());
    for (auto i : vec) {
        std::cout << i << std::endl;
    }
}