#include <iostream>

int main(){
     int num;
    std::cin >> num;
    for (int i = 0; i < num; ++i) {
        int multiple;
        std::string str;
        std::cin >> multiple >> str;

        for (int j = 0; j < str.size(); ++j) {
            for (int k = 0; k < multiple; ++k) {
                std::cout << str[j];
            }
            
        }
        std::cout << std::endl;
    }
}
