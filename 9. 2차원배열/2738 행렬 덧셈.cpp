#include <iostream>
#include <vector>

int main(){
     int n; int m;

    std::cin >> n>> m;
    std::vector<std::vector<int>> arr1;
    std::vector<std::vector<int>> arr2;
    for (int i = 0; i < n; ++i) {
        std::vector<int> temp;
        arr1.emplace_back(temp);
        for (int j = 0; j < m; ++j) {
            int nn;
            std::cin >> nn;
            arr1[i].emplace_back(nn);
        }
    }
    for (int i = 0; i < n; ++i) {
        std::vector<int> temp;
        arr2.emplace_back(temp);
        for (int j = 0; j < m; ++j) {
            int nn;
            std::cin >> nn;
            arr2[i].emplace_back(nn);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << arr2[i][j] + arr1[i][j]<<" ";
        }
        std::cout << std::endl;
    }
}