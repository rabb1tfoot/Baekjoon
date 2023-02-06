#include <iostream>

int main(){
    int num; 
    int sum = 0;
    std::string value;
    std::cin >> num;
    std::cin >> value;

    for (int i = 0; i < num; ++i) {
        sum += value[i] - '0';
    }
    std::cout << sum;

    return 0;
}