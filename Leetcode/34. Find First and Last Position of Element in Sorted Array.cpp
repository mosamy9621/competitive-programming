class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> out;
        int firstIndex = lower_bound(nums.begin(),nums.end(),target) - nums.begin();                 int secondIndex = lower_bound(nums.begin(),nums.end(),target+1) - nums.begin();
        if(firstIndex == nums.size() || nums[firstIndex]!=target){
            out.push_back(-1);
            out.push_back(-1);
            return out;
        }
        out.push_back(firstIndex);
        out.push_back(secondIndex-1);
        return out;
        
    }
};