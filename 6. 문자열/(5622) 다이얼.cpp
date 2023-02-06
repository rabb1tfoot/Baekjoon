#include <iostream>
#include <string>
#include <array>

int main(){
     std::array<std::string, 8> arrTelephoneNum;
    arrTelephoneNum[0] = "ABC";
    arrTelephoneNum[1] = "DEF";
    arrTelephoneNum[2] = "GHI";
    arrTelephoneNum[3] = "JKL";
    arrTelephoneNum[4] = "MNO";
    arrTelephoneNum[5] = "PQRS";
    arrTelephoneNum[6] = "TUV";
    arrTelephoneNum[7] = "WXYZ";
    std::string numbers;
    std::cin >> numbers;
    int move = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = 0; j < arrTelephoneNum.size(); ++j) {
            char temp =  numbers[i];
            if (arrTelephoneNum[j].find(temp) != std::string::npos) {
                move += (j + 3);
                break;
            }
        }
    }

    std::cout << move;

    return 0;
}