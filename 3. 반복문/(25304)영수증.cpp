#include <iostream>
#include <vector>

int main(){
     int sum = 0;
    int num = 0;
    int result = 0;

    std::cin >> sum;
    std::cin >> num;
    for (int i = 0; i < num; ++i) {
        int fee;
        int numOfFee;
        std::cin >> fee >> numOfFee;
        result += fee * numOfFee;
    }
    if (result == sum) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }
    return 0;
}