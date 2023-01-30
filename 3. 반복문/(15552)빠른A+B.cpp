#include <iostream>
#include <vector>

int main(){
   std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL); // printf로하면 더 빠름
    int num = 0;
    std::cin >> num;
    for (int i = 0; i < num; ++i) {
        int temp1 = 0;
        int temp2 = 0;
        std::cin >> temp1 >> temp2;
        std::cout << temp1 + temp2 <<"\n";
    }
    return 0;
}