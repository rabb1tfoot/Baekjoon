#include <iostream>
#include <array>

int main(){
    std::array<int, 10000> nums;
    std::array<bool, 10000> bNums = {false, };
    
     for (int i = 1; i < nums.size(); ++i) {
        if (bNums[i] == true) {
            continue;
        }
        nums[i] = i;
        int notSelfNum = i;
        while (1) {
            std::array<char, 6> strNum = {};
            int strSize = sprintf(strNum.data(), "%d", notSelfNum);
            for (int j = 0; j < strSize; ++j) {
                int temp = strNum[j] - '0';
                notSelfNum += temp;
            }
            if (notSelfNum > 9999) {
                break;
            }
            bNums[notSelfNum] = true;
        }
    }
    
    for (int i = 1; i < nums.size(); ++i) {
        if (bNums[i] == true) {
            continue;
        }
        std::cout << i << std::endl;
    }



    return 0;
}