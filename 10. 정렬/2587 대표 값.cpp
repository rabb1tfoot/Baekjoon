#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n = 5;
    int mid = 0;
    int result = 0;
    std::vector<int> vec;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        vec.emplace_back(num);
    }
    std::sort(vec.begin(), vec.end());
    for (auto i : vec) {
        result += i;
    }
    std::cout << result / vec.size()<<std::endl;
    std::cout << vec[2];
}