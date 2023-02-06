#include <stdio.h>
#include <vector>
#include <utility>

int count = 0;

void hanoi(int n, int from, int by, int to, std::vector<std::pair<int, int>>& v) {
    if (n == 1) {
        v.emplace_back(from, to);
        count++;
    }
    else {
        hanoi(n - 1, from, to, by, v);
        v.emplace_back(from, to);
        count++;
        hanoi(n - 1, by, from, to, v);
    }
}

int main(){
    int n;
    std::vector<std::pair<int, int>> v;
    scanf("%d", &n);

    hanoi(n, 1, 2, 3, v);
    printf("%d\n", count);
    for (auto item : v) {
        printf("%d %d\n", item.first, item.second);
    }
}