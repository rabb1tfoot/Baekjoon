#include <stdio.h>
#include <string.h>
#include <utility>
#include <vector>

int Recursion(char* s, int l, int r, int* n);
int isPalindome(char* s, int* n);
int main()
{
   int n;
    scanf("%d", &n);
    std::vector<std::pair<int, int>> v;
    for (int i = 0; i < n; ++i) {
        char string[1000];
        scanf("%s", string);
        int count = 1;
        int TF = isPalindome(string, &count);
        v.emplace_back(TF, count);
    }
    for (int i = 0; i < v.size(); ++i) {
        printf("%d %d\n", v[i].first, v[i].second);
    }
}

int Recursion(char* s, int l, int r, int* n) {
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else {
		(*n) += 1;  
		return Recursion(s, l + 1, r - 1, n);
	}
}
int isPalindome(char* s, int* n) {
	return Recursion(s, 0, strlen(s) - 1, n);
}