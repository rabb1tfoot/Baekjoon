#include <iostream>

int main(){
    int num;
    std::cin >> num;
    int i = 0;
    for (int sum = 2; sum <= num; i++){
        sum += 6 * i;
    }
        
    if (num == 1){
        i = 1;
    }
    std::cout << i;
    return 0;
}