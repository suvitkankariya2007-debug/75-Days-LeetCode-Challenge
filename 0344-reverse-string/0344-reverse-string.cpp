class Solution {
public:
    void reverseString(vector<char>& s) {
      /*  int org=s.size();
        for(int i=s.size()-1;i>=0;i--)
        {
            s.push_back(s[i]);
        }
        
        s.erase(s.begin(), s.begin()+org);
      
      we use swapping methid by 2 pointers
        */
        int l=0,r=s.size()-1;
        while(l<=r)
        {
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            l++;
            r--;
        }
        
    }
};