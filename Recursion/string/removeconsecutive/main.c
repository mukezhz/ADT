#include <stdio.h>

void remove_consecutive(char* str) {
    if (str[0] == '\0') return;
    remove_consecutive(str + 1);
    if (str[0] == str[1]) {
        int i;
        for (i = 0;str[i] != '\0'; i++)
            str[i] = str[i + 1];
        str[i] = '\0';
        remove_consecutive(str);
    }
}

int main(int argc, char const* argv[]) {
    char str[] = "aaabbcddcdca";
    printf("%s\n", str);
    printf("After removal of consecutive letter\n");
    remove_consecutive(str);
    printf("%s\n", str);
    return 0;
}
