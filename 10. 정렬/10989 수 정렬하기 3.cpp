#include <stdio.h>
#include <set>
int overlap[10001] = {0,};

int main(){
    int n;
    scanf("%d", &n);
    std::set<int> set;
    for (int i = 0; i < n; ++i) {
        int score;
        scanf("%d", &score);
        auto boverlap = set.insert(score);
        if(!boverlap.second)
            overlap[score]++;
    }

    for (auto iter = set.begin(); iter != set.end(); ++iter) {
        printf("%d\n", *iter);
        if (overlap[*iter] != 0) {
            for (int i = 0; i < overlap[*iter]; ++i) {
                printf("%d\n", *iter);
            }
        }
    }
}