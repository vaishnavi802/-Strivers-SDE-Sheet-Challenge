//finding power of number without using pow function

class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long int y=n;
        if(n<0)
        {
            y=(-1)*y;
        }
        while(y>0)
        {
            if(y%2==1)
            {
                ans=ans*x;
                y=y-1;
            }
            else
            {
                x=x*x;
                y=y/2;
            }
        }
        if(n<0)
        {
            ans=1/ans;
        }
        return ans;
    }
};

//time complexity: O(logn)
//space complexity: O(1)