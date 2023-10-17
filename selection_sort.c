#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // 현재 인덱스 i와 최소값을 가진 인덱스 minIndex의 원소를 교환
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {2, 1, 5, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("입력 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n);

    printf("정렬된 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
