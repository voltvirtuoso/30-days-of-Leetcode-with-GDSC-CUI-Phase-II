bool exist(vector<int>& nums, int num);
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> explored; int i;
        for (i = 0; i<nums.size(); i++){
            if(!exist(nums,i)) return i;
            explored.push_back(nums[i]);
        }
        return i;
    }
};
bool exist(vector<int>& nums, int num){
    for(auto i:nums){
        if (num == i) return true;
    }
    return false;
}
