#include<iostream>
#include <vector>

int main(){
     int num;
    int floor; int room;
    std::cin >> num;
    for (int i = 0; i < num; ++i) {
        std::cin >> floor;
        std::cin>> room;
        std::vector<int> peoples;
        std::vector<int> Newpeoples;

        for (int k = 1; k <= room; ++k) {
            peoples.emplace_back(k);
        }
        Newpeoples = peoples;
        for (int j = 0; j < floor; ++j) {
            peoples = Newpeoples;
            for (int k = 0; k < room; ++k) {
                for (int l = 0; l < k; ++l) {
                    Newpeoples[k] += peoples[l];
                }
            }
        }

        std::cout << Newpeoples[room - 1]<<std::endl;

    }
    return 0;
}