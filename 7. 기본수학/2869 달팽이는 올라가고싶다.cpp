#include <iostream>

int main(){
    int day; int sleep; int target;
    std::cin >> day >> sleep >> target;
    int length = 0;
    int tryCount = 0;
    while (1) {
        tryCount += 10;
        length += day * 10;
        length -= sleep * 9;
        if (length >= target)
        {
            tryCount -= 10;
            length -= day * 10;
            length += sleep * 9;
            for (int i = 0; i < 10; ++i) {
                tryCount++;
                length += day;
                if (length >= target) {
                    std::cout << tryCount;
                    return 0;
                }
                length -= sleep;
            }
        }
        length -= sleep;
    }
}