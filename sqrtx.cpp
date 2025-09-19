#include <stdio.h>

int mySqrt(int x) {
    if (x == 0 || x == 1) return x;
    
    long left = 1, right = x, result = 0;
    while (left <= right) {
        long mid = left + (right - left) / 2;
        if (mid * mid == x) return mid;
        else if (mid * mid < x) {
            left = mid + 1;
            result = mid;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    printf("sqrt(8): %d\n", mySqrt(8));
    return 0;
}