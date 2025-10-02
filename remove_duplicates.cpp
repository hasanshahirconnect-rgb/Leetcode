#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int k = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i-1]) {
            nums[k++] = nums[i];
        }
    }
    return k;
}

int main() {
    int nums[] = {1,1,2,2,3,4,4,5};
    int newSize = removeDuplicates(nums, 8);
    
    printf("New size: %d\n", newSize);
    printf("Array: ");
    for (int i = 0; i < newSize; i++) printf("%d ", nums[i]);
    printf("\n");
    
    return 0;
}