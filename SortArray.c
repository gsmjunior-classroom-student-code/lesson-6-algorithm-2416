#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        while (arr[i] != i + 1) {
            if (arr[i] <= 0 || arr[i] > n || arr[i] == arr[arr[i] - 1])
                break;
            swap(&arr[i], &arr[arr[i] - 1]);
        }
    }
}

int main() {
    int arr[] = { 2, 1, 5, 4, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("정렬되기 전 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sortArray(arr, n);

    printf("정렬된 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
