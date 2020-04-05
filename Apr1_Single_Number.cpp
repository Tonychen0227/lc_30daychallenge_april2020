class Solution {
public:
    // O(n) Time: Must traverse all of nums
    // O(n) Memory: Must store every number in array at worst
    int singleNumber(vector<int>& nums) {
        map<int, int> freqMap;
        
        // Count word frequency
        for (int i = 0; i < nums.size(); i++) {
            freqMap[nums[i]]++;
        }
        
        // Find single number
        map<int, int>::iterator it = freqMap.begin();
        while(it != freqMap.end()) {
            if (it->second == 1) {
                return it->first;
            }
            it++;
        }
        
        // Return -1 if no results found
        return -1;
    }
};