class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        
       while(start <= end) {
            int midPoint = start + (end - start) / 2;

            if(nums[midPoint] > target) {
                end = midPoint - 1;
            } else if (nums[midPoint] < target) {
                start = midPoint + 1;
            } else {
                return midPoint;
            }
       }
        
        return -1;
    }
};
