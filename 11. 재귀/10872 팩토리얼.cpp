#include <iostream>

int Recursion(int value);
int main(){
    int n;
	scanf("%d", &n);
    if (n == 0){
		printf("1");
    }
	else {
	printf("%d",Recursion(n));
    }
}
int Recursion(int value) {
	if (value == 1)
		return 1;
	return value * Recursion(value - 1);
}
