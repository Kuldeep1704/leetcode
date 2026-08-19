class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n, -1);

        for (int i = 0; i < n; i++) {

            for (int j = 1; j < n; j++) {

                int k = (i + j) % n;

                if (nums[k] > nums[i]) {
                    ans[i] = nums[k];
                    break;
                }
            }
        }

        return ans;
    }
};