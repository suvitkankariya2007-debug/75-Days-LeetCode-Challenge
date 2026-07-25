class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max=nums[0];
        int min=nums[0];
        int gcd=1;
        for(int i=0;i<nums.size();i++)
        {
            if(max<=nums[i])
            max=nums[i];
            if(min>=nums[i])
            min=nums[i];
        }for(int j=1;j<=max;j++)
        {
            if(max%j==0&&min%j==0)
            gcd=j;
        }
        return gcd;
    }
};