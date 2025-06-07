impl Solution {
    pub fn find_closest_number(nums: Vec<i32>) -> i32 {
        let mut ans = 999999;
        let mut is_neg: bool = false;
        for num in nums.iter() {
            if (*num < 0) {
                let tmp = num * -1;
                if (tmp < ans) {
                    ans = tmp;
                    is_neg = true;
                }
            } else {
                if (*num < ans) {
                    ans = *num;
                    is_neg = false
                } else if (*num == ans) {
                    is_neg = false
                }
            }
        }

        if (is_neg) {
            ans = ans * -1;
        }

        return ans;
    }
}
