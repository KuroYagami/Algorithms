#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i = 0, j, temp, swapped;
    while (i < n - 1) {
        j = 0;
        swapped = 0;
        while (j < n - i - 1) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
            j++;
        }
        if (!swapped)
            break;
        i++;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]), i = 0;
    bubble_sort(arr, n);
    printf("Sorted array: ");
    while (i < n) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    return 0;
}
