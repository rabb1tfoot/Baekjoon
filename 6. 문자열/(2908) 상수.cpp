#include <iostream>
#include <string>

void func2(const std::string& str, int& result);
int main()
{
    int num = 0;
    int num2 = 0;
    std::string str;
    std::string str2;
    std::cin >> str >>str2;

    func2(str, num);
    func2(str2, num2);

    if (num > num2) {
        std::cout << num;
    }
    else {
        std::cout << num2;
    }
    return 0;


}

void func2(const std::string& str, int& result) {
    std::string temp;

    for(int i = str.size() - 1; i > -1; --i) {
        temp += str[i];
    }

    result = std::stoi(temp);

}