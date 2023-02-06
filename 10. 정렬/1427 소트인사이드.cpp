#include <string>
#include <iostream>
#include <set>

int main(){
    std::string str;
    std::multiset<int, std::greater<int>> set;
    std::cin >> str;
    for (auto item : str) {
        int num = item - '0';
        set.insert(num);
    }
    for (auto iter = set.begin(); iter != set.end(); ++iter) {
        std::cout << *iter;
    }
}