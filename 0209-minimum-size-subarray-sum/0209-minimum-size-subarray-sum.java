class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int sum=0;
        int low = 0;
        int high = 0;
        int minLenwindow = Integer.MAX_VALUE;
        for (high=0;high<nums.length;high++){
            sum += nums[high];
            while (sum>=target){
                int currentwindow = high-low+1;
                minLenwindow = Math.min(minLenwindow , currentwindow);
                sum=sum-nums[low];
                low++;
            }
        }
        return minLenwindow == Integer.MAX_VALUE ? 0:minLenwindow;
    }
}