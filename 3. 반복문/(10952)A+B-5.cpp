#include <iostream>

int main(){
int num; int num2;
	while (1) {
		std::cin >> num >> num2;
		if (num == 0 && num2 == 0) {
			break;
		}
		std::cout << num + num2<<std::endl;
	}
	

    return 0;
}