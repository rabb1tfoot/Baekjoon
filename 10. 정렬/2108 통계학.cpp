#include <iostream>
#include <vector>
#include <set>
#include <cmath>
int overlap[8001] = {0,};
int main(){
    int n;
    int mean = 0;
    std::set<int> set;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        mean += num;
        auto bOverlap = set.insert(num);
        if (!bOverlap.second) {
            overlap[num + 4000] += 1;
        }
    }
    std::cout << (int)round((double)mean / n) << std::endl;
    int count = 0;
    int maxCount = 0;
    std::vector<int> minimum;
    for (auto iter = set.begin(); iter != set.end(); ++iter) {
        bool bOverlap = false;
        if (overlap[*iter + 4000] != 0) {
            bOverlap = true;
            
            if (maxCount <= overlap[*iter + 4000]) {
                if (maxCount == overlap[*iter + 4000]) {
                    minimum.emplace_back(* iter);
                }
                else {
                    minimum.clear();
                    maxCount = overlap[*iter + 4000];
                    minimum.emplace_back(*iter);
                }
               
            }
        }
        //medium value
        if (bOverlap) {
            if (count + (overlap[*iter + 4000]) >= n / 2
                && count <= n / 2) {
                std::cout << *iter << std::endl;
            }
            count += overlap[*iter + 4000];
        }
        else {
            if (count == n / 2) {
                std::cout << *iter << std::endl;
            }
        }
        count++;
    }

    if (minimum.size() > 1) {
        std::cout << minimum[1]<<std::endl;
    }
    else if(minimum.size() == 1) {
        std::cout << minimum[0]<<std::endl;
    }
    else {
        auto iter = set.begin();
        if (set.size() == 1) {
            std::cout << *iter << std::endl;
        }
        else {
            std::advance(iter, 1);
            std::cout << *iter << std::endl;
        }
    }
    if (set.size() == 1) {
        std::cout << 0;
    }
    else {
        auto iterEnd = set.end();
        std::advance(iterEnd, -1);
        std::cout << *(iterEnd)-*(set.begin());
    }
   
}