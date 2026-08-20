class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            if(digits[i]==9){
            digits[i]=0;
            }
            //if every elemnt is 0
         
            
        }
        //iuf evry digit 9
        vector<int>ans(n+1,0);
        ans[0]=1;
        return ans;
        
    }
};