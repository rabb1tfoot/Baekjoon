#include <iostream>

int main() {
    int a; int b;
    std::cin >> a >> b;
    double c = (double)a / b;
    std::cout.precision(10); //소수점 자리 조절
    std::cout << c;
    return 0;

}