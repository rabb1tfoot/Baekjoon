#include <iostream>
#include <vector>

int main(){
      int num;
    std::cin >> num;
    std::vector<int> vResult;
    for (int i = 0; i < num; ++i) {
        int temp1;
        int temp2;
        std::cin >> temp1 >> temp2;
        vResult.emplace_back(temp1 + temp2);
    }
    for (auto answer : vResult) {
        std::cout << answer << std::endl;
    }
    return 0;
}