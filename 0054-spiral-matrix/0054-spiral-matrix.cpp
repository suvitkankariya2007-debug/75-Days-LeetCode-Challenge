class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
     //   vector<int>mat;
     int m=mat.size();
    vector<int>ans;
        /*int left=0,right=m-1;
        int top=0;
        int bot=mat[0].size()-1;
       */
        int rows = mat.size();
int cols = mat[0].size();

int left = 0;
int right = cols - 1;

int top = 0;
int bot = rows - 1;
        //for left to right
        while(left<=right&&top<=bot)
        {
            
       for(int i=left;i<=right;i++)
        {
           ans.push_back(mat[top][i]);
        }
        top++;
       
        //for top to bottom
        for(int i=top;i<=bot;i++)
        {
            ans.push_back(mat[i][right]);
        }  right--;
         if(top<=bot)
        {
      
        for(int i=right;i>=left;i--)
        {
            ans.push_back(mat[bot][i]);
        }
        bot--;
        }if(left<=right)
        {
        
        for(int i=bot;i>=top;i--)
        {
            ans.push_back(mat[i][left]);
        }
        left++;
        }
        }return ans;
    }
};
  