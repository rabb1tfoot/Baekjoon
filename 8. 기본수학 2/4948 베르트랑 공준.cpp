#include <stdio.h>

int main(){
     int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0)
            return 0;
        int result = 0;
        int* Prime = new int[2 * n + 1]{};
        Prime[0] = 1;
        Prime[1] = 1;
        for (int i = 2; i <= 2 * n; ++i) {
            if (Prime[i] == 1) continue;
            for (int j = 2 * i; j <= 2 * n; j += i) {
                if(j > 2 * n) continue;
                Prime[j] = 1;
            }
        }

        for (int i = n + 1; i <= 2 * n; ++i) {
            if (Prime[i] != 1) {
                result++;
            }
        }
        printf("%d\n", result);
        result = 0;
    }

    return 0;
}