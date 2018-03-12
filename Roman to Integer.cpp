//Given a roman numeral, convert it to an integer.

//Input is guaranteed to be within the range from 1 to 3999.

class Solution {
public:
    int romanToInt(string s) {
        int tag[256];
        tag['I'] = 1;
        tag['V'] = 5;
        tag['X'] = 10;
        tag['L'] = 50;
        tag['C'] = 100;
        tag['D'] = 500;
        tag['M'] = 1000;
        int val = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(i+1 >= s.length() || tag[s[i]] >= tag[s[i+1]])
            {
                val += tag[s[i]];
            }
            else
            {
                val -= tag[s[i]];
            }
        }
        return val;
    }
};
