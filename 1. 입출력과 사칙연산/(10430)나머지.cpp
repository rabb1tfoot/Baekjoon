#include <iostream>
#include <array>

int main() {
    std::array<int, 3> input;

    std::cin >> input[0] >> input[1] >> input[2];

    //ù° �ٿ� (A+B)%C, ��° �ٿ� ((A%C) + (B%C))%C, ��° �ٿ� (A��B)%C, ��° �ٿ� ((A%C) �� (B%C))%C�� ����Ѵ�.
    std::cout << (input[0] + input[1]) % input[2] << std::endl;
    std::cout << ((input[0] % input[2]) + (input[1] % input[2])) % input[2] << std::endl;
    std::cout << (input[0] * input[1]) % input[2] << std::endl;
    std::cout << ((input[0] % input[2]) * (input[1] % input[2])) % input[2] << std::endl;
    return 0;
}