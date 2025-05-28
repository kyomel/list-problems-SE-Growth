class Solution {
    public int findClosestNumber(int[] nums) {
        int closest = Integer.MIN_VALUE;
        int distance = Integer.MAX_VALUE;
        for(int i =0; i < nums.length; i++){
            int number = nums[i];
            int currDistance = nums[i] < 0 ? nums[i] * (-1) : nums[i];
            if(distance > currDistance){
                distance = currDistance;
                closest = number;
            } else if(distance == currDistance){
                if(closest < number){
                    distance = currDistance;
                    closest = number;
                }
            }
        }

        return closest;
    }
}