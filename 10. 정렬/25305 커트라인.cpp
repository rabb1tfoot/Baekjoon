#include <iostream>
#include <vector>
#include <algorithm>

int main(){
     int n; int k;
    std::cin >> n >> k;
    std::vector<int> student;
    for (int i = 0; i < n; ++i) {
        int score;
        std::cin >> score;
        student.emplace_back(score);
    }

    std::sort(student.begin(), student.end());
    std::cout << student[student.size() - k];
}