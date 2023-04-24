#include <stdio.h>
#include <string.h>

// Пришлось переписать программу, потому что рефакторить прошлую вышло бы дольше.

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}


void hair_sort(char *arr[], int n) {
    int gap = n;
    int swapped = 1;
    while (gap > 1 || swapped) {
        gap = gap * 10 / 13;
        if (gap == 0) gap = 1;
        swapped = 0;
        for (int i = 0; i < n - gap; i++) {
            if (strcmp(arr[i], arr[i + gap]) > 0) {
                char *tmp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = tmp;
                swapped = 1;
            }
        }
    }
}

int main() {
    char *arr[] = {"bac", "weufg", "qwryyyy", "aaaaa", "jjjjj", "qwoeugfw"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Перед сортировкой:\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }

    qsort(arr, n, sizeof(char *), compare);
    lexical_sort(arr, n);

    printf("\nПосле:\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}