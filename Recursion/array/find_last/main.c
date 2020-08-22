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
    if (arr[size - 1] == num) return size - 1;
    int small_array = find(arr, size - 1, num);
    if (small_array == -1) return -1;
    else return small_array;
}
int find1(int* arr, int size, int num) {
    if (size == 0) return -1;
    int small_array = find(arr + 1, size - 1, num);
    if (small_array == -1) {
        if (arr[0] == num) return 0;
        else return -1;
    }
    else return ++small_array;

}
int main(int argc, char const* argv[]) {
    int arr[5] = { 5,6,7,2,5 };
    int num = 15;
    display_array(arr, 5);
    printf("%d element is last found at: %d\n", num, find1(arr, 5, num));
    return 0;
}
