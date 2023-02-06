#include <iostream>

int main(){
    int num;
    int H; int W; int target;
    std::cin >> num;
    for (int i = 0; i < num; ++i) {
        std::cin >> H >> W >> target;
        int index = 0;
        bool breaker = false;;
        while (1) {
            for (int j = 0; j < W; ++j) {
                for (int k = 0; k < H; ++k) {
                    index++;
                    if (index == target) {
                        std::cout << (k+1) * 100 + (j+1)<<std::endl;
                        breaker = true;
                        break;
                    }
                }
                if (breaker) break;
            }
            if (breaker) break;
        }
    }
}