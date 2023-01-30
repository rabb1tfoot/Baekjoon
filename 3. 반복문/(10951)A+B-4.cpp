#include <iostream>

int main(){
int num; int num2;
	while (!(std::cin>>num>>num2).eof()) {
		std::cout << num + num2<<std::endl;
	}
	

    return 0;
}