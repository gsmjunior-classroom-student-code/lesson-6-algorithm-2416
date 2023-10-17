#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    int swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0; // 스왑 여부를 나타내는 플래그

        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // 인접한 두 원소를 비교하고 순서를 바꿈
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        // 만약 이번 패스에서 스왑이 없었다면 배열이 이미 정렬된 상태이므로 종료
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("버블 정렬되기 전 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubble_sort(arr, n);

    printf("버블 정렬된 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}