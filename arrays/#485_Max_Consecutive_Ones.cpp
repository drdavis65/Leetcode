// Date last reviewed:
// 4/14/2025
// ==================================================
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                max = std::max(count, max);
                count = 0;
            }
            else {
                count++;
            }
        }
        return std::max(count, max);;
    }
};
