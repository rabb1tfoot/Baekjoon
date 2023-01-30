#include <iostream>

int main(){
   int num1, num2, num3;
    int result = 0;

    std::cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num2 == num3) {
        result = 1000 * num1 + 10000;
    }
    else if (num1 == num2 || num1 == num3 || num2 == num3) {
        if (num1 == num2) {
            result = num1 * 100 + 1000;
        }
        else if (num2 == num3) {
            result = num2 * 100 + 1000;
        }
        else if(num1 == num3) {
            result = num3 * 100 + 1000;
        }
    }
    else {
        if (num1 > num2 && num1 > num3) {
            result = num1 * 100;
        }
        else if (num2 > num1 && num2 > num3) {
            result = num2 * 100;
        }
        else if(num3 > num1 && num3 > num2) {
            result = num3 * 100;
        }
    }
    std::cout << result;
    return 0;
}