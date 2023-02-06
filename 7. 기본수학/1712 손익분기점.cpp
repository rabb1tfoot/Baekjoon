#include <iostream>

int main(){
    int A; int B; int C;

    std::cin >> A >> B >> C;

    if (B >= C) {
        std::cout << "-1";
    }
    else {
        int stack = C - B;

        int result = (int)(A / stack) + 1;
        std::cout << result;
    }
}