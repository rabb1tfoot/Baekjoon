#include <iostream>

int main(){
    int M; int N;
    int resultSum = 0;
    int resultMin = 0;
    std::cin >> M >> N;

    for (int i = M; i < N + 1; ++i) {
        if (i == 1)
            continue;
        int j = 2;
        while (j != i) {
            if (i % j == 0)
                break;
            j++;
        }
        if (i == j) {
            resultSum += i;
            if (resultMin == 0)
                resultMin = i;
        }
    }
    if (resultMin == 0) {
        std::cout << -1;
    }
    else {
        std::cout << resultSum << std::endl << resultMin;
    }
}