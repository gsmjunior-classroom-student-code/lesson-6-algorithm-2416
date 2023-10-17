#include <stdio.h>

void selection_sort(int arr[], int n) {
    int i, j, min_index, temp;

    for (i = 0; i < n - 1; i++) {
        min_index = i;

        // 현재 위치부터 배열의 끝까지 최솟값을 찾음
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // 최솟값을 현재 위치로 옮김 (교환)
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("선택 정렬되기 전 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selection_sort(arr, n);

    printf("선택 정렬된 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}