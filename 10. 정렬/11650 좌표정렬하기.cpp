#include <array>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
     int n; 
    std::cin >> n;
    std::array<int, 2> arr;
    std::vector<std::array<int, 2>> vec;

    for(int i = 0; i < n; ++i){
        int x; int y;
        scanf("%d %d", &x, &y);
        arr[0] = x; arr[1] = y;
        vec.emplace_back(arr);
    }

    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); ++i) {
        printf("%d %d\n", vec[i][0], vec[i][1]);
    }
}