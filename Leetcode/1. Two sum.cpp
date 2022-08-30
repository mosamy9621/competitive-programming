class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> myMap;
        int len = nums.size();
        vector<int>out;
        for(int i=0;i<len;i++){
            myMap[nums[i]]=i;
            cout<<myMap[nums[i]]<<endl;
        }
        for(int i=0;i<len;i++) {
            int search = target - nums[i];
            if(myMap.find(search)!= myMap.end() && myMap[search] != i) { 
                out.push_back(i);
                out.push_back(myMap[search]);
                break;
            }
        }
        return out; 
        }
    
};