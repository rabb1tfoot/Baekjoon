#include <iostream>

int main(){
  int num = 0;
    std::string str;

    getline(std::cin, str);

    if (str[0] != ' ') {
        num++;
    }

    for (int i = 1; i < str.size(); ++i) {
        if (str[i - 1] == ' ' && str[i] != ' ') {
            num++;
        }
    }
    std::cout << num;
    return 0;
}