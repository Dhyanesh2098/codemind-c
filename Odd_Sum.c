#include <stdio.h>
int calculateOddSum(int arr[], int size) {
    int oddSum = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            oddSum += arr[i];
        }
    }
    return oddSum;
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    int oddSum = calculateOddSum(arr, size);
    printf("%d
", oddSum);
}