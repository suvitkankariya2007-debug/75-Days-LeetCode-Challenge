class Solution {
public:
    int countCommas(int n) {
        int c=0;
        if(n<1000)
        return 0;
        while(n>=1000)
        {
            string str=to_string(n);
            int digit=str.size();
            int commas=(digit-1)/3;
            c+=commas;
            n--;

        }
        return c;
    }
};