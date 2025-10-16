#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    
    for (int i = 0; strs[0][i]; i++) {
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != strs[0][i]) {
                char* result = malloc(i + 1);
                strncpy(result, strs[0], i);
                result[i] = '\0';
                return result;
            }
        }
    }
    return strs[0];
}

int main() {
    char* strs[] = {"flower", "flow", "flight"};
    char* result = longestCommonPrefix(strs, 3);
    printf("LCP: %s\n", result);
    return 0;
}