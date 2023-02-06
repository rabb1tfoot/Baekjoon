#include <array>
#include <iostream>

int main(){
     std::array<int, 26> print;
    print.fill(-1);
    std::string str;
    std::cin >> str;

    for (int i = 0; i < str.size(); ++i) {
        if (print[str[i] - 97] == -1) {
            print[str[i] - 97] = i;
        }
    }

    for (auto i : print) {
        std::cout << i << " ";
    }
    return 0;
}