class Solution {
public:
    int getSum(int a, int b) {
        int ans = 0;
        int carry = 0;
        for(int i = 0; i <= 31; i++) {
            int a_bit = (a>>i) & 1, b_bit = (b>>i) & 1;
            if(a_bit == 0 && b_bit == 0) {
                if(carry) {
                    ans = ans | (1<<i);
                    carry = 0;
                }
            }
            else if((a_bit == 1 && b_bit == 0) || (b_bit == 1 && a_bit == 0)) {
                if(carry)
                    continue;
                else
                    ans = ans | (1<<i);
            }
            else if(a_bit == 1 && b_bit == 1) {
                if(carry) 
                    ans = ans | (1<<i);
                
                else 
                    carry = 1;
            }
        }
        return ans;
    }
};
