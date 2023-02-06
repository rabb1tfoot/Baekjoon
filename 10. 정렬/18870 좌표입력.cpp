#include <iostream>
#include <vector>
#include <algorithm>

int main(){
     int n;
    std::cin >> n;

    std::vector<int> vOrigin;
    std::vector<int> vSorted;

    for (int i = 0; i < n; ++i) {
        int num;
        scanf("%d", &num);
        vOrigin.emplace_back(num);
    }
    vSorted = vOrigin;
    std::sort(vSorted.begin(), vSorted.end());
    vSorted.erase(std::unique(vSorted.begin(), vSorted.end()), vSorted.end());
    for (int i = 0; i < vOrigin.size(); ++i) {
        printf("%d ", std::lower_bound(vSorted.begin(), vSorted.end(), vOrigin[i]) - vSorted.begin());
    }
}