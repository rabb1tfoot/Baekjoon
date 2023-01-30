#include <iostream>

int main(){
     int num;
    int score = 99;
    std::cin >> num;

    if (num < 100) {
        std::cout << num;
        return 0;
    }
    
     for (int i = 100; i < num + 1; ++i) {
        int three = i / 100;
        int two = (i / 10) % 10;
        int one = i % 10;

        if (three - two == two - one) {
            score++;
        }
    }

    std::cout << score;



    return 0;
}