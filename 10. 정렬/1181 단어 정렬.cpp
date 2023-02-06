#include <utility>
#include <vector>
#include <algorithm>
#include <iostream>

int main(){
    int n;
    std::cin >> n;
    std::vector< std::pair<int, std::string>> vec;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cin >> str;
        std::pair<int, std::string> pair((int)str.size(), str);
        vec.emplace_back(pair);
    }

    std::sort(vec.begin(), vec.end(), [](std::pair<int, std::string> arg1, std::pair<int, std::string> arg2) {
        if (arg1.first == arg2.first) {
            return arg1.second < arg2.second;
        }
        return arg1.first < arg2.first;
        });
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
    for (auto item : vec) {
        std::cout << item.second << std::endl;
    }
}