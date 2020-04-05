class Solution {
public:
    // O(n) Time: Worst-case is all 0s so O(n) + O(n) where 2nd n is entire array
    // O(1) Memory
    void moveZeroes(vector<int>& nums) {
        int ptr = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[ptr] = nums[i];
                ptr++;
            }
        }
        for (int i = ptr; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};