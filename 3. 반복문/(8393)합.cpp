#include <iostream>
#include <vector>

int main(){
      int num;
    std::cin >> num;
    int result = 0;
    for (int i = 1; i < num + 1; ++i) {
        result += i;
    }
    std::cout << result;

    return 0;
}