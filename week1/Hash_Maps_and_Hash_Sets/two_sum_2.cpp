class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int> hash;
        hash.insert(nums.begin(), nums.end());
        vector<int>ans;
        int fid = 0;
        for(int i = 0; i < nums.size(); i++){
            fid = target - nums[i];
            unordered_set<int>::iterator it = hash.find(fid);
            if(it != hash.end() && nums[i] != fid){
                ans.push_back(i);
                break;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == fid){
                ans.push_back(i);
                return ans;
            }
        }
        return ans;
    }
};
