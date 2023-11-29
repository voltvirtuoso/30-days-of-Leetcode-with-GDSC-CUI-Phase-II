class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i<=n; i++){
            unsigned sum = 0, num = i;
            while(num != 0){
                sum += num%2;
                num = num/2;
                cout<<sum;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
