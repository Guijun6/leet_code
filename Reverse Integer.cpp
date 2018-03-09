//Given a 32-bit signed integer, reverse digits of an integer.

//Example 1:

//Input: 123
//Output:  321
//Example 2:

//Input: -123
//Output: -321
//Example 3:

//Input: 120
//Output: 21
//Note:
//Assume we are dealing with an environment which could only hold integers within the 32-bit signed integer range. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

class Solution {
public:
    int reverse(int x) {
        if(x == 0)
            return x;
        if(x < 0)
        {
            x = 0 - x;
            int ret = 0;
            while(x)
            {
                int tmp = ret*10 + x%10;
                if(tmp / 10 != ret) //判断溢出的方法
                    return 0;
                ret = tmp;
                x = x/10;
            }
            return 0-ret;
        }
       if(x > 0)
        {
            int ret = 0;
            while(x)
            {
               int tmp = ret*10 + x%10;
                if(tmp / 10 != ret)
                    return 0;
                ret = tmp;
                x = x/10;
            }
            return ret;
        } 
    }
};
