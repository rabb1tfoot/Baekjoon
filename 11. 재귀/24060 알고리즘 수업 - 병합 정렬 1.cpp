#include <stdio.h>

int temp[500000];
int count = 0;
int result = -1;
int k;

void merge(int arr[], int p, int q, int r) {
    int i = p;
    int j = q + 1;
    int t = 1;

    while (i <= q && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[t++] = arr[i++];
        }
        else {
            temp[t++] = arr[j++];
        }
    }
    while (i <= q)
        temp[t++] = arr[i++];
    while (j <= r)
        temp[t++] = arr[j++];
    i = p; t = 1;
    while (i <= r) {
        arr[i++] = temp[t++];
        count++;

        if (k == count) {
            result = temp[t - 1];
        }
    }

}

void merge_sort(int arr[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(arr, p, q);
        merge_sort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}

int main(){
    int n;
    scanf("%d %d", &n, &k);
    int* arr = new int[n] {};
    for (int i = 0; i < n; ++i) {
        int num;
        scanf("%d", &num);
        arr[i] =  num;
    }
    merge_sort(arr, 0, n-1);
    printf("%d", result);
    delete arr;
}