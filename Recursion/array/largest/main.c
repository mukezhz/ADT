#include <stdio.h>

void show_array(int* arr, int size) {
    if (size == 0) {
        printf("\n");
        return;
    }
    printf("%d\t", arr[0]);
    show_array(arr + 1, size - 1);
}

int largest(int* arr, int size) {
    static int large = 0;
    if (size == 0) return -1;
    if (size == 1) {
        if (large < arr[0])
            return (large = arr[0]);
        return large;
    }
    if (large < arr[0]) {
        large = arr[0];
    }
    int s = largest(arr + 1, size - 1);
    return large;
}

int find_largest(int* arr, int size) {
    if (size == 0)
        return -1;
    if (size == 1)
        return arr[0];
    int possible_large1 = arr[0];
    int possible_large2 = find_largest(arr + 1, size - 1);
    if (possible_large1 > possible_large2)
        return possible_large1;
    else
        return possible_large2;

}

int main(int argc, char* argv[])
{
    int arr[5] = { 1,2,13,4,5 };
    printf("Finding the largest number using recursion\n");
    printf("The array is:\n");
    show_array(arr, 5);
    printf("\nThe largest element in array is: %d\n", find_largest(arr, 5));
    printf("\nThe largest element in array is: %d\n", largest(arr, 5));
    return 0;
}
