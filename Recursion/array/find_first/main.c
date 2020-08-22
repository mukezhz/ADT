#include <stdio.h>

void display_array(int* arr, int size) {
    if (size == 0) {
        printf("\n");
        return;
    }
    printf("%d ", arr[0]);
    return display_array(arr + 1, size - 1);
}

int find(int* arr, int size, int num) {
    if (size == 0) return -1;
    if (arr[0] == num) return 0;
    int small_array = find(arr + 1, size - 1, num);
    if (small_array == -1) return -1;
    else return small_array + 1;
}

int main(int argc, char const* argv[]) {
    int arr[5] = { 5,8,42,5,2 };
    int num = 42;
    display_array(arr, 5);
    printf("%d is at index: %d\n", num, find(arr, 5, num));
    return 0;
}
