class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t temp = n; uint32_t counter = 0;
        while(temp){
            if(temp&1)
                counter++;
            temp = temp>>1;
        }
        return counter;
    }
};
