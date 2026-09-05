class Solution {
public:
    int maxProfit(vector<int>&a) {
       // int mn=min_element(prices.begin(),prices.end());//an iterator doesmt give index
       int mn=a[0];
       int res=0;
       for(int i=1;i<a.size();i++)
       {
        mn=min(a[i],mn);
        res=max(a[i]-mn,res);
       }return res;
      
    }
};