class Solution {
public:
    int maxProduct(int n) {
        vector <int>a;
        int c=0;
        while(n>0)
        {
            int rem=n%10;
            a.push_back(rem);
            c++;
            n/=10;

        }sort(a.begin(),a.end());
        return a[c-2]*a[c-1];

        
    }
};