class Solution {
public:
    int search(vector<int>& nums, int target) {
        unsigned j, length = j = nums.size(); j--;
        for(int i = 0; i<length/2+1; i++){
            if(nums[i] == target)
                return i;
            else if(nums[j--]==target)
                return ++j;
        }
        return -1;
    }
};
