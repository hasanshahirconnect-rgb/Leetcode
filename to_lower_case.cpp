#include <stdio.h>
#include <ctype.h>

char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

void toLowerString(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toLowerCase(str[i]);
    }
}

int main() {
    char str[100];
    scanf("%99s", str);
    toLowerString(str);
    printf("%s\n", str);
    return 0;
}