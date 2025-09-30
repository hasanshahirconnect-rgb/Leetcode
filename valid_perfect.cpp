#include <stdio.h>
#include <stdbool.h>

bool isPerfectSquare(int num) {
    if (num < 1) return false;
    long left = 1, right = num;
    while (left <= right) {
        long mid = left + (right - left) / 2;
        long square = mid * mid;
        if (square == num) return true;
        else if (square < num) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

int main() {
    printf("16 is perfect square: %s\n", isPerfectSquare(16) ? "true" : "false");
    return 0;
}