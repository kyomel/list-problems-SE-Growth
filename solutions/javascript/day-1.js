/**
 * @param {number[]} nums
 * @return {number}
 */
var findClosestNumber = function(nums) {
    let ans = 999999;
    let is_neg = 0;

    for (let i = 0; i < nums.length; i++) {
        if (nums[i] < 0) {
            const tmp = nums[i] * -1;
            if (tmp < ans) {
                ans = tmp;
                is_neg = 1;
            }
        } else {
            const tmp = nums[i];
            if (nums[i] < ans) {
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
    
};
