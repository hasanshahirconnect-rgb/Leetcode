#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int k = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k++] = nums[i];
        }
    }
    return k;
}

int main() {
    int nums[] = {3,2,2,3,4};
    int newSize = removeElement(nums, 5, 3);
    
    printf("New size: %d\n", newSize);
    printf("Array: ");
    for (int i = 0; i < newSize; i++) printf("%d ", nums[i]);
    printf("\n");
    
    return 0;
}