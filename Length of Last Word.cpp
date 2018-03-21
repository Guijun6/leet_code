//Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

//If the last word does not exist, return 0.

//Note: A word is defined as a character sequence consists of non-space characters only.

//Example:

//Input: "Hello World"
//Output: 5

class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length() == 0)  return 0;
        //最后一个字符为空格时
        else if(s[s.length() - 1] == ' ')
        {
            size_t count = 0;
            for(size_t i = s.length() - 1; i >= 0; i--)
            {
                if(s[i] != ' ')
                {
                    count++;
                }
                if((count != 0) && (s[i] ==' '))
                {
                    //例如这种" world "
                    return count;
                }
                if(i == 0 && s[i] != ' ')
                {
                    //例如这种"world "
                    return count++;
                }
                if(i == 0 && s[i] == ' ')
                {
                    //全部为空格时
                    return 0;
                }
            }
        }
        //正常情况"hello world" 或 "world"
        else
        {
            size_t count = 0;
            for(int i = s.length() - 1; i >= 0; i--)
            {
                if(s[i] == ' ') return count;
                if (i == 0) return ++count;
                count++;
            }
        }
    }
};
