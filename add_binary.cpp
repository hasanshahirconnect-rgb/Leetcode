#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = (lenA > lenB) ? lenA : lenB;
    
    char* result = (char*)malloc(maxLen + 2); // +1 for carry, +1 for null terminator
    result[maxLen + 1] = '\0';
    
    int carry = 0;
    int i = lenA - 1, j = lenB - 1, k = maxLen;
    
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        
        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }
    
    // If there's leftover carry, adjust the result pointer
    if (k >= 0) {
        return result + k + 1;
    }
    
    return result;
}

int main() {
    char a[] = "1010";
    char b[] = "1011";
    char* result = addBinary(a, b);
    printf("Binary sum: %s\n", result);
    free(result);
    return 0;
}