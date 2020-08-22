#include <stdio.h>
void display_array(int* arr, int size) {
    if (size == 0) {
        printf("\n");
        return;
    }
    printf("%d\t", arr[0]);
    display_array(arr + 1, size - 1);
}

int array_shorted(int* arr, int size) {
    if (size == 1)
        return 1;
    if (arr[0] > arr[1])
        return 0;
    return array_shorted(arr + 1, size - 1);
}

int main(int argc, char const* argv[]) {
    int arr[5] = { 15, 25, 136, 44, 55 };
    display_array(arr, 5);
    if (array_shorted(arr, 5))
        printf("The array is shorted\n");
    else
        printf("The array is not shorted\n");
    return 0;
}
