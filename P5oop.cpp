#include <stdio.h>

template <typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        T temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int main() {
    int arr1[] = {64, 25, 12, 22, 11};
    float arr2[] = {64.5, 25.1, 12.7, 22.3, 11.0};
    
    selectionSort(arr1, 5);
    selectionSort(arr2, 5);
    
    printf("Sorted integer array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Sorted floating point array: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", arr2[i]);
    }
    printf("\n");

    return 0;
}













Here is the simple algorithm for the selection sort function used to sort an array of integers or floating-point numbers:

### Selection Sort Algorithm:
1. **Start with the first element** of the array.
2. **Find the smallest element** in the unsorted portion of the array (from the current index to the end of the array).
3. **Swap** the smallest element found with the element at the current index.
4. **Move to the next index** and repeat steps 2 and 3 until the entire array is sorted.

### Steps:
1. **Initialize** a variable `i` to 0 (this represents the current position in the array).
2. For each `i` from 0 to `n-2` (where `n` is the size of the array):
   - Set `minIdx = i`.
   - **Find the smallest element** by iterating through the remaining unsorted portion of the array (from `i+1` to `n-1`).
   - If an element smaller than `arr[minIdx]` is found, update `minIdx` to the new index.
   - **Swap** the element at index `i` with the element at `minIdx`.
3. **Repeat** until all elements are sorted.

