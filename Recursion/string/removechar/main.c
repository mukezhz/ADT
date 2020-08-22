#include <stdio.h>

void removechar(char* str, char ch) {
    if (*str == '\0') return;
    removechar(str + 1, ch);
    if (str[0] == ch) {
        int i;
        for (i = 0; str[i] != '\0';i++)
            str[i] = str[i + 1];
        str[i] = '\0';
        removechar(str, ch);
    }
}

int main(int argc, char const* argv[]) {
    char word[] = "xxyxx";
    printf("%s\n", word);
    char ch = 'x';
    printf("After removal of character %c\n", ch);
    removechar(word, ch);
    printf("%s\n", word);
    return 0;
}
