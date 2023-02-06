#include <iostream>
#include <array>

int main(){
    int n;
    int result = 0;
    std::cin >> n;
    std::array<std::array<int, 100>, 100> field{0,};
    for (int i = 0; i < n; ++i) {
        int inputX; int inputY;
        std::cin >> inputX >> inputY;

        for (int y = 0; y < 10; ++y) {
            for (int x = 0; x < 10; ++x) {
                if (y + inputY >= 100 || x + inputX >= 100)
                    continue;
                field[y + inputY][x + inputX] = 1;
            }
        }
    }

    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            result += field[i][j];
        }
    }
    std::cout << result;
}