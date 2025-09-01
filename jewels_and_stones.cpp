#include <stdio.h>
#include <string.h>

int numJewelsInStones(char* jewels, char* stones) {
    int count = 0;
    for (int i = 0; stones[i] != '\0'; i++) {
        for (int j = 0; jewels[j] != '\0'; j++) {
            if (stones[i] == jewels[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    char jewels[] = "aA";
    char stones[] = "aAAbbbb";
    printf("Jewels in stones: %d\n", numJewelsInStones(jewels, stones));
    return 0;
}