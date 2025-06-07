int findClosestNumber(int* nums, int numsSize) {
    int ans = 9999999;
    int is_neg = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < 0) {
            int tmp = nums[i] * -1;
            if (tmp < ans) {
                ans = tmp;
                is_neg = 1;
            }
        } else {
            int tmp = nums[i];
            if (tmp < ans) {
                ans = tmp;
                is_neg = 0;
            } else if (tmp == ans) {
                is_neg = 0;
            }
        }
    }

    if (is_neg) {
        ans = ans * -1;
    }

    return ans;
}
