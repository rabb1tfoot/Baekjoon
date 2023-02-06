#include <set>
#include <iostream>

int main(){
     int num;
    int result = 0;
    std::cin >> num;

    for (int i = 0; i < num; ++i) {
        std::string inputTemp;
        std::cin >> inputTemp;

        std::set<char> temp;

        for (int i = 0; i < inputTemp.size(); ++i) {
            int size = temp.size();
            temp.insert(inputTemp[i]);
            if (size == temp.size()) {
                if (inputTemp[i - 1] != inputTemp[i]) {
                    result--;
                    break;
                }
            }
        }
        result++;

    }
    std::cout << result;
    return 0;
}