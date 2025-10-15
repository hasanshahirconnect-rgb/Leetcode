#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPerfectNumber(int num) {
    if (num <= 1) return false;
    int sum = 1;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) sum += num / i;
        }
    }
    return sum == num;
}

int main() {
    printf("28 is perfect: %s\n", checkPerfectNumber(28) ? "true" : "false");
    return 0;
}