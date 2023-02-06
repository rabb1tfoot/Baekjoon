#include <iostream>
#include <vector>

int main(){
    std::vector<std::vector<int>> arr1;
    for (int i = 0; i < 9; ++i) {
        std::vector<int> temp;
        arr1.emplace_back(temp);
        for (int j = 0; j < 9; ++j) {
            int nn;
            std::cin >> nn;
            arr1[i].emplace_back(nn);
        }
    }
    int max = -1;
    int x; int y;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (max < arr1[i][j]) {
                max = arr1[i][j];
                y = i; x = j;
            }
        }
    }
    std::cout << max<<std::endl;
    std::cout << y+1 << " " << x+1;
}