class Solution {
public:
    int distributeCandies(vector<int>& candytype) {
        int c=1;
        sort(candytype.begin(),candytype.end());
        for(int i=1;i<candytype.size();i++)
        {
            if(candytype[i]!=candytype[i-1])
            {
                c++;
            }
        }return  min(c, (int)candytype.size()/2);
        
    }
};