class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size()-1, s = 0;
        int e = n, mid;
        while (s < e){
            mid = s + (e-s)/2 ;
            if (nums[mid] < nums[e]) e = mid ;
            else if (nums[mid] > nums[e]) s = mid + 1 ;
            else e-- ;
        }
        return nums[s] ;
    }
};
