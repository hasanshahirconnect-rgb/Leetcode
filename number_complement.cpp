#include <stdio.h>

int findComplement(int num) {
    unsigned mask = ~0;
    while (num & mask) mask <<= 1;
    return ~mask & ~num;
}

int main() {
    printf("Complement of 5: %d\n", findComplement(5));
    return 0;
}