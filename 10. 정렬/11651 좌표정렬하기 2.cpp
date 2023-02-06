#include <stdio.h>
#include <array>
#include <vector>
#include <algorithm>

int main(){
    int n;
    scanf("%d",&n);
    std::array<int, 2> arr;
    std::vector<std::array<int, 2>> vec;
    
    for (int i = 0; i < n; ++i) {
        int x; int y;
        scanf("%d %d", &x, &y);
        arr[0] = x; arr[1] = y;
        vec.emplace_back(arr);
    }
    
    std::sort(vec.begin(), vec.end(), [](std::array<int, 2> arg1, std::array<int, 2> arg2) {
        if (arg2[1] == arg1[1])
            return arg1[0] < arg2[0];
        return arg1[1] < arg2[1];
        });
    
    for (int i = 0; i < vec.size(); ++i) {
        printf("%d %d\n", vec[i][0], vec[i][1]);
    }
}