#include <stdio.h>

void display_array(int* arr, int size) {
    if (size == 0) {
        printf("\n");
        return;
    }
    printf("%d ", arr[0]);
    display_array(arr + 1, size - 1);
}

int frequency(int* arr, int size, int* a, int num) {
    if (size == 0) return 0;                                // base
    int result = frequency(arr + 1, size - 1, a, num);       // remaing list
    for (int i = 0; i < result; i++)                     // actual index is one more
        a[i]++;
    if (arr[0] == num) {                                    // shifting if found at 0 index
        for (int i = result - 1; i >= 0; i--)
            a[i + 1] = a[i];
        a[0] = 0;
        result++;
    }
    return result;
}

int count(int* arr, int size, int* a, int num) {
    if (size == 0) return 0;                                // base
    int result = count(arr, size - 1, a, num);              // sub list except last one
    if (arr[size - 1] == num) {                             // since result is frequency of num
        a[result] = size - 1;
        result++;
    }
    return result;
}


int main(int argc, char const* argv[]) {
    int arr[5] = { 5,8,8,6,0 };
    int num = 5;
    int a[5] = { 0 };
    display_array(arr, 5);
    printf("The frequency of %d is %d\n", num, count(arr, 5, a, num));
    printf("%d element are at index\n", num);
    if (count(arr, 5, a, num))
        display_array(a, count(arr, 5, a, num));
    else
        printf("No any element\n");
    return 0;
}
