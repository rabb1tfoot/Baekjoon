#include <iostream>

int main(){
    int N;
    std::cin >> N;

    while (N > 1) {
        for (int primeNum = 2; primeNum <= N; ++primeNum) {
            if (N % primeNum == 0) {
                N /= primeNum;
                std::cout << primeNum << std::endl;
                break;
            }
        }
    }
}