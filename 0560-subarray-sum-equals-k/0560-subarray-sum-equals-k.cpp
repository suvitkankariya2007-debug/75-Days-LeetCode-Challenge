class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int s=0,c=0;
        unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++)
    {
        s+=nums[i];
        if(s==k)
        c++;
        if(mp.count(s-k))//mp.count(x)
        c+=mp[s-k];//accesses the value, and if x doesn't exist, it creates it with the default value.
        mp[s]++;
    }return c;
    }
};