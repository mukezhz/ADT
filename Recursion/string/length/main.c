#include <stdio.h>

int length(char* str) {
    if (*str == '\0') return 0;
    return 1 + length(str + 1);
}

int main(int argc, char const* argv[]) {
    char country[] = "Nepal";
    printf("%s country have %d character\n", country, length(country));
    return 0;
}
