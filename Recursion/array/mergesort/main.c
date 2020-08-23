#include <stdio.h>
void display(int* arr, int size) {
    if (size == 0) {
        printf("\n");
        return;
    }
    printf("%d ", arr[0]);
    display(arr + 1, size - 1);
}
void merge(int* arr, int low, int medium, int high) {
    int size = high - low + 1;
    int temp[size];
    int i, j, k;

    i = low; j = medium + 1; k = low;           //medium+1 due to half+1 to end see function call of mergesort
    for (;i <= medium && j <= high; k++) {
        if (arr[i] < arr[j])
            temp[k] = arr[i++];
        else
            temp[k] = arr[j++];
    }
    // for remaining
    while (i <= medium)
        temp[k++] = arr[i++];

    while (j <= high)
        temp[k++] = arr[j++];

    for (i = low; i <= high; i++)
        arr[i] = temp[i];

}

void mergesort(int* arr, int low, int high) {
    if (low >= high) return;
    int medium = (low + high) / 2;
    mergesort(arr, low, medium);            //sort upto medium
    mergesort(arr, medium + 1, high);       //sort from medium+1 to end
    merge(arr, low, medium, high);
}

int main(int argc, char const* argv[]) {
    int arr[] = { 8,7,5,10,3,1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size);
    printf("After merge sort\n");
    mergesort(arr, 0, size - 1);
    display(arr, size);
    return 0;
}
