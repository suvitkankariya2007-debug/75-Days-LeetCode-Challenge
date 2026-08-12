class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        vector<int>a;
        for(int i =0;i<nums.size()-1;i++)
        {
            if(nums[i+1]-nums[i]!=1)
            {
                int c=nums[i+1]-nums[i]-1;
                int j=0;
                while(c--)
                {j++;
                    a.push_back(nums[i]+j);//here  for even nums[i]+1 array is not changing
                }
            }
        }
return a;
        
    }
};