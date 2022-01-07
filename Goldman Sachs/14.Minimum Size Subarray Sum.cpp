class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n = nums.size(), start=0, window_sum=0, min_len = INT_MAX;
 
        for (int end=0; end<n; end++) {
            window_sum+=nums[end];
            while (window_sum >= s) {
                min_len = min(min_len, end-start+1);
                window_sum-=nums[start++];
            }
        }
        return min_len==INT_MAX?0:min_len;
    }
};
