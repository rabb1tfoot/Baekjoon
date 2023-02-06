#include <stdio.h>
int main()
{
    int N; int M;
	int vPrimeNum[1000001];
    scanf("%d %d", &N, &M);

	vPrimeNum[0] = 1;
	vPrimeNum[1] = 1;
	for (int i = 2; i < M + 1; ++i) {
		for (int j = 2 * i; j < M + 1; j += i) {
			if (vPrimeNum[i] == 0) {
				vPrimeNum[j] = 1;
			}

		}
	}
	for (int i = N; i < M + 1; ++i) {
		if (vPrimeNum[i] == 0)
            printf("%d\n", i);
	}
	return 0;
}