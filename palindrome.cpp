#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
    
    int reversed = 0;
    int original = x;
    
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return original == reversed;
}

int main() {
    printf("121 is palindrome: %s\n", isPalindrome(121) ? "true" : "false");
    return 0;
}