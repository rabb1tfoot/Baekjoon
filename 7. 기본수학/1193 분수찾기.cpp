#include <iostream>

int main(){
   int upper = 0;
    int downer = 0;

    int num;
    std::cin >> num;
    int sum = 2;
    int loop = 1;
    for (int i = 1; sum <= num; ++i) {
        for (int j = 0; j < sum; ++j) {
            if (loop == num) {
                break;
            }
            if (i % 2 == 1) {
                upper = j + 1;
                downer = sum - j;
            }
            else {
                upper = sum - j;
                downer = j + 1;
            }
            loop++;
        }
        sum++;

    }
    if (num == 1) {
        upper = 1;
        downer = 1;
    }
    std::cout << upper << "/" << downer;
    return 0; 
}