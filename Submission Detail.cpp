//Determine whether an integer is a palindrome. Do this without extra space.

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        else
        {
            int i = x;
            int ret = 0;
            while(i)
             {
                 int tmp = ret*10 + i%10;
                 if(tmp/10 != ret)
                    return false;
                 i /= 10;
                 ret = tmp;
             }
            if(ret == x)
                return true;
            else
                return false;
        }
    }
};
