// Kyomel Solution
// Time Complexity: O(n)
// Space Complexity: O(1)

func findClosestNumber(nums []int) int {
	if len(nums) == 0 {
		return 0
	}

	closest := nums[0]
	minDiff := abs(nums[0])

	for i := 1; i < len(nums); i++ {
		currDiff := abs(nums[i])

		if currDiff < minDiff {
			closest = nums[i]
			minDiff = currDiff
		} else if currDiff == minDiff && nums[i] > closest {
			closest = nums[i]
		}
	}

	return closest
}

func abs(x int) int {
	if x < 0 {
		return -x
	}

	return x
} 