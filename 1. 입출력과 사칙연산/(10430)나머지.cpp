#include <iostream>
#include <array>

int main() {
    std::array<int, 3> input;

    std::cin >> input[0] >> input[1] >> input[2];

    //첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
    std::cout << (input[0] + input[1]) % input[2] << std::endl;
    std::cout << ((input[0] % input[2]) + (input[1] % input[2])) % input[2] << std::endl;
    std::cout << (input[0] * input[1]) % input[2] << std::endl;
    std::cout << ((input[0] % input[2]) * (input[1] % input[2])) % input[2] << std::endl;
    return 0;
}