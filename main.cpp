class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) 
            return 0;
        
        int n = nums.size();
        int uniqueIdx = 0;
        
        for (int i = 1; i < n; ++i) {
            if (nums[i] != nums[uniqueIdx]) {
                ++uniqueIdx; 
                nums[uniqueIdx] = nums[i];
            } 
            else 
                nums[i] = '_';
        }
        
        for (int i = uniqueIdx + 1; i < n; ++i)
            nums[i] = '_';
        
        return uniqueIdx + 1;   
    }
};
