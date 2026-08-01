class Solution {
    public:


        int squareSum(int n)
        {
        int sum = 0;

        while(n > 0)
        {
            int rem = n % 10;
            sum = sum + rem * rem;
            n = n / 10;
        }return sum;
        }
        bool isHappy(int n)
        {

    vector<int>store;
    while(n!=1)
    {
        bool found=false;
        for(int i=0;i<store.size();i++)
        {
            if(store[i]==n){
            found=true;
            break;
        }
        }
        if(found)
        {
            return false;
        }
        store.push_back(n);
        n=squareSum(n);
    }return true;

    
    }
};