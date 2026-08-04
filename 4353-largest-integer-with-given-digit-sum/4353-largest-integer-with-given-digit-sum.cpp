class Solution {
public:
    int largestInteger(int n, int s) {
     //   vector<character>ans;
     string ans="";
        int digit;
        if(s==0)
        return 0;
        if(s>9*n)
        return -1;
       // while(s>=0)
        //{

        for (int i = 0; i < n; i++) {
            
         digit=min(9,s);
      //  ans.push_back(char(digit));
       ans += to_string(digit);
        s-=digit;

        
    }
    int num = stoi(ans);
    return num;
    }
};