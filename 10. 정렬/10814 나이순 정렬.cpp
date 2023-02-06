#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

int main(){
    int n;
    std::cin >> n;

    std::vector<std::pair<int, std::string>> vp;

    for (int i = 0; i < n; ++i) {
        int age;
        std::string name;
        std::cin >> age >> name;
        vp.emplace_back(age, name);
    }

    std::stable_sort(vp.begin(), vp.end(), [](std::pair<int, std::string> arg1, std::pair<int, std::string> arg2){
        return arg1.first < arg2.first; });

    for (int i = 0; i < vp.size(); ++i) {
        printf("%d %s\n", vp[i].first, vp[i].second.c_str());
    }
}