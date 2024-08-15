#include <stdlib.h>
#include <stdio.h>

#define N 15

int quick_sort(int *data, int low, int high);

int partion(int *data, int low, int high);

int main() {
    int data[N] = {0};
    int i;
    srand(20);
    for (i = 0; i < N; i++)
        data[i] = rand() % 20;
    for (i = 0; i < N; i++)
        printf("%d ", data[i]);
    puts("");
    quick_sort(data, 0, N - 1);
    for (i = 0; i < N; i++)
        printf("%d ", data[i]);
    puts("");
    system("pause");
    return 0;
}

int quick_sort(int *data, int low, int high) {
    int t;
    if (data == NULL)
        return -1;
    if (low >= high)
        return 0;
    t = partion(data, low, high);
    quick_sort(data, low, t - 1);
    quick_sort(data, t + 1, high);
    return 0;
}

int partion(int *data, int low, int high) {
    int temp = data[low];
    while (low < high) {
        while (low < high && temp <= data[high])
            high--;
        data[low] = data[high];
        while (low < high && temp >= data[low])
            low++;
        data[high] = data[low];
    }
    data[low] = temp;
    return low;
}
