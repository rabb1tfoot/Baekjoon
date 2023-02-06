#include <iostream>
#include <array>
#include <string>

int main(){
   std::array<std::string, 8> arr = { "c=", "c-", "dz", "d-", "lj", "nj", "s=", "z=" };
    std::string croa;
    std::cin >> croa;
    int count = 0;

    for (int i = 0; i < croa.size() - 1; ++i) {
            std::string temp = "";
            temp = croa.substr(i, 2);

            for (int j = 0; j < arr.size(); ++j) {
                if (!temp.compare(arr[j])) {
                    if (j == 2) {
                        if (i < croa.size() - 2) {
                            temp = croa.substr(i + 1, 2);
                            if (!temp.compare(arr[7])) {
                                i += 2;
                                break;
                            }
                        }
                    }
                    else {
                        i++;
                        break;
                    }
                }
            }
            if (i == croa.size() - 1) {
                count--;
            }
            count++;

        }
        count++;
        std::cout << count << std::endl;

    return 0;
}