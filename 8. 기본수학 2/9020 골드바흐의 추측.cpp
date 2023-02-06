#include <stdio.h>
int main(){
    int size = 10000;

    int* Prime = new int[10001] {};
    int T;
    int n;

    Prime[0] = 1;
    Prime[1] = 1;
    for (int i = 2; i <= 10000; ++i) {
        if (Prime[i] == 1) continue;
        for (int j = 2 * i; j <= 10000; j += i) {
            Prime[j] = 1;
        }
    }

    scanf("%d", &T);

    for (int i = 0; i < T; ++i) {
        scanf("%d", &n);

        for (int j = n / 2; j >0; --j) {
            if (Prime[j] != 1 && Prime[n - j] != 1) {
                printf("%d %d\n", j, n - j);
                break;
            }
            
        }
    }
   
    return 0;
}