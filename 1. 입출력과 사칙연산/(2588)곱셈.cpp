#include <iostream>
#include <array>
#include <string>
#include <cmath>

int main() {
    std::array<int, 2> input;
    std::array<int, 3> num1;
    std::array<int, 3> num2;

    std::cin >> input[0] >> input[1];

    std::string str_num1 = std::to_string(input[0]);
    std::string str_num2 = std::to_string(input[1]);

    for (int i = 0; i < str_num1.size(); ++i) {
        num1[i] = str_num1[str_num1.size() - 1 - i] - '0';
        num2[i] = str_num2[str_num1.size() - 1 - i] - '0';
    }
    int result = 0;
    for (int i = 0; i < num1.size(); ++i) {
        int temp = 0;
        for (int j = 0; j < num2.size(); ++j) {
            temp += (num1[j] * pow(10, j)) * (num2[i] * pow(10, i));
        }
        result += temp;
        std::cout << temp / pow(10, i) << std::endl;

    }
    std::cout << result << std::endl;
    return 0;
}