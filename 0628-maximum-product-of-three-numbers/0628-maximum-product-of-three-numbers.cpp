class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        //try using selection sort 
        int temp;
        int n=nums.size();
        for(int i=0;i<=n-2;i++)
        {int minind=i;
            for(int j=i+1;j<=n-1;j++)
            {
                if(nums[j]<nums[minind])
                minind=j;



            }if(i!=minind)
            {
          temp=nums[i];
            nums[i]=nums[minind];
            nums[minind]=temp;
        }

        }

       // return(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[2]); because the comma operator evaluates both expressions but returns only the last one.
       return max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);
    }
};