#include <stdio.h>

int linear_search(const int a[], int n, int target) {
    /* Scan left to right until the target appears */
    for (int i = 0; i < n; i++) {
        if (a[i] == target) return i;
    }
    return -1;
}

int main(void) {
    int nums[] = {7, 3, 9, 1, 5, 8, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("Index of 5: %d\n", linear_search(nums, n, 5));
    printf("Index of 4: %d\n", linear_search(nums, n, 4));
    return 0;
}
