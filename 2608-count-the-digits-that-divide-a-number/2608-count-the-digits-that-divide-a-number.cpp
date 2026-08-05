class Solution {
public:
    int countDigits(int num) {
        int rem;
        int c=0;
        int temp=num;
        while(num>0)
        {
            rem=num%10;
                        if(rem%10 != 0 ){
                                       if(temp%rem==0){
            c++;
            }
            num/=10;
                        }


        }return c;
    }
};