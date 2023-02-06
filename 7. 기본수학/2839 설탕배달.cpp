#include <iostream>
#include <set>

int main(){
    int num;
    std::cin >> num;

    int bag = 0;
    int fiveValue = 0;
    int fullValue = 0;

    std::set<int> result;

    while (1) {
        if (fullValue < num) {
            fullValue += 3;
            bag += 1;
        }
        else if (fullValue == num) {
            result.insert(bag);

            fiveValue++;
            fullValue = 0;
            fullValue = fiveValue * 5;
            bag = fiveValue;

            if (fullValue > num) break;
        }
        else {
            fiveValue++;
            fullValue = 0;
            fullValue = fiveValue * 5;
            bag = fiveValue;

            if (fullValue > num) break;
        }
    }

    if (result.empty()) {
        std::cout << -1;
        return 0;
    }
    std::cout << *result.begin();
    

    return 0;
}
