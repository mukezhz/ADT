#include <stdio.h>

void display(int* arr, int size);
void quicksort(int* arr, int low, int high);
int partition(int* arr, int low, int high);
void swap(int* a, int* b);

int main(int argc, char const* argv[]) {
    int arr[] = { 7,3,7,5,5,50,70,8 };
    int size = sizeof(arr) / sizeof(*arr);
    display(arr, size);
    printf("After quick sort\n");
    quicksort(arr, 0, size - 1);
    display(arr, size);
    return 0;
}

void display(int* arr, int size) {
    if (size == 0) {
        printf("\n");
        return;
    }
    printf("%d ", *arr);
    display(++arr, --size);
}

void quicksort(int* arr, int low, int high) {
    if (low >= high) return;
    int position = partition(arr, low, high);
    quicksort(arr, low, position - 1);
    quicksort(arr, position + 1, high);
}

int partition(int* arr, int low, int high) {
    int pivot = arr[low];
    int count = 0;
    for (int i = low; i <= high; i++)
        (pivot > arr[i]) ? count++ : count;
    //now we have got no of element less than pivot
    //place pivot at right place
    for (int i = low; i < count + low; i++)
        arr[i] = arr[i + 1];

    arr[count + low] = pivot;

    int i = low, j = high;
    while (i <= j) {
        if (pivot < arr[j]) {
            if (arr[i] < pivot) i++;
            else j--;
        }
        else { // pivot > arr[j]
            if (arr[i] >= pivot)
                swap(&arr[i++], &arr[j]);
            else i++;
        }
    }
    return count + low;
}

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
