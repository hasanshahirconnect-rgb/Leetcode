#include <stdio.h>

int hammingWeight(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    printf("1 bits in 11: %d\n", hammingWeight(11));
    return 0;
}