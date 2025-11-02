#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* countAndSay(int n) {
    if (n == 1) return "1";
    
    char* current = (char*)malloc(2);
    strcpy(current, "1");
    
    for (int i = 2; i <= n; i++) {
        char* next = (char*)malloc(2 * strlen(current) + 1);
        int nextIndex = 0;
        
        int j = 0;
        while (current[j] != '\0') {
            int count = 1;
            char digit = current[j];
            
            while (current[j + 1] == digit) {
                count++;
                j++;
            }
            
            next[nextIndex++] = count + '0';
            next[nextIndex++] = digit;
            j++;
        }
        
        next[nextIndex] = '\0';
        free(current);
        current = next;
    }
    
    return current;
}

int main() {
    int n = 5;
    char* result = countAndSay(n);
    printf("Count and say for n=%d: %s\n", n, result);
    free(result);
    return 0;
}