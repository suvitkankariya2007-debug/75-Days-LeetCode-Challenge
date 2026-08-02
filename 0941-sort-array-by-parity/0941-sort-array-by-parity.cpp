class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      //two separate buckets
      //using 2 pointer approach
      int i=0,j=nums.size()-1;
      while(i<j)
      {
        if(nums[i]%2==0&&nums[j]%2!=0){
        i++;
        j--;
      }
        else if(nums[i]%2!=0&&nums[j]%2!=0)
        j--;//odd odd right to stay but left not so decrement left
        else if(nums[i]%2==0&&nums[j]%2==0)
        i++;
        else{
        swap(nums[i],nums[j]);
        i++;
        j--;

      }
      }
      return nums;
    }
    };