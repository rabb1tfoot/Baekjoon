#include <iostream>

int main(){
     int num1, num2;

    std::cin >> num1 >> num2;
    if (num2 - 45 < 0) {
        if (num1 == 0) {
            num1 = 23;
        }
        else{
            num1 -= 1;
        }
        
        num2 = num2 + 15;
    }
    else {
        num2 -= 45;
    }
    std::cout << num1 << " " << num2<<std::endl;

    return 0;
}