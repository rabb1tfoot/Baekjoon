#include <stdio.h>
#include <set>

int main(){
    int n;
    scanf("%d",&n);
    std::set<int> set;
    for (int i = 0; i < n; ++i) {
        int score;
        scanf("%d", &score);
        set.insert(score);
    }

    for (auto iter = set.begin(); iter != set.end(); ++iter) {
        printf("%d\n", *iter);
    } 
}