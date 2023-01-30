#include <iostream>

int main(){
      int num1, num2, num3;
    int hour = 0;
    int min = 0;

    std::cin >> num1 >> num2;
    std::cin >> num3;

    if (num2 + num3 >= 60) {
        min = (num2 + num3) % 60;
        hour = num1 + (num2 + num3) / 60;
        hour %= 24;
    }
    else {
        hour = num1;
        min = num2 + num3;
    }
    std::cout << hour << " " << min;
    
    return 0;
}