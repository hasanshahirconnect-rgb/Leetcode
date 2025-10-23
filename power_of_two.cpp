#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    printf("16 is power of two: %s\n", isPowerOfTwo(16) ? "true" : "false");
    return 0;
}