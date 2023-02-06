#include <iostream>

int Recursion(int value);
int main(){
    int n;
	scanf("%d", &n);
	if (n == 0)
		printf("0");
	else if (n == 1)
		printf("1");
	else {
		printf("%d", Recursion(n));
	}
	
}
int Recursion(int value) {
	if (value == 1)
		return 1;
	else if (value == 0)
		return 0;
	return Recursion(value - 1) + Recursion(value - 2);
}