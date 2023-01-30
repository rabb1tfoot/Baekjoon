#include <iostream>
#include <array>

int main() {
    std::array<int, 6> ground{ 1,1,2,2,2,8 };
    std::array<int, 6> input;

    std::cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4] >> input[5];

    for (int i = 0; i < ground.size(); ++i) {
        std::cout << ground[i] - input[i] << " ";
    }
    return 0;
}