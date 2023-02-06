#include <iostream>

int main(){
    int N;
    int result = 0;
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        int temp;
        std::cin >> temp;
        int j = 2;
        if (temp == 1) {
            continue;
        }
        else {
            while (j != temp) {
                if (temp % j == 0)
                    break;
                j++;
            }
            if (j == temp)
                result++;
        }
       
    }
    std::cout << result;
    return 0;
}