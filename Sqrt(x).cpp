//Implement int sqrt(int x).

//Compute and return the square root of x.

//x is guaranteed to be a non-negative integer.


//Example 1:

//Input: 4
//Output: 2
//Example 2:

//Input: 8
//Output: 2
//Explanation: The square root of 8 is 2.82842..., and since we want to return an integer, the decimal part will be truncated.

class Solution {
public:
    int mySqrt(int x)
    {
        int low=1;
        int high=x;
        int ret;

        if(x==0)
            return 0;
        while(low<=high)
        {
            ret=low+(high-low)/2;
            if(ret==x/ret)
                break;
            else if(ret<x/ret)
                low=ret+1;
            else
                high=ret-1;

        }
        if(ret>x/ret)
            return ret-1;
        else
            return ret;
    }
};
