/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());//also check do by merge sort
      int i;
        int j;
        int s=0;
        for(int k=0;k<nums.size();k++)
        {s=0;
        i=k+1;
        j=nums.size()-1;
        if(k>0&&nums[k-1]==nums[k])
            continue;//to get rid of duplicates
            while(i<j)//2 pointer approach
            {
                s=nums[i]+nums[j]+nums[k];
                if(s==0)
                {

                ans.push_back({nums[k],nums[i],nums[j]});
              
                    i++,j--;
                    
                }
                if(s<0)
                i++;
                if(s>0)
                j--;

            }
            
        }
        
    return ans;}
};
*/
//Optimized Approach - O(n^2 logn + nlogn) - o(n^2 logn) time and O(n) space
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> output;
        for (int i = 0; i < nums.size(); i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        for(auto triplets : s)
            output.push_back(triplets);
        return output;
    }
};