//Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

//The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
    	for (int i = 0; i<s.size(); i++)
    	{	
    		if (c.empty() || ((c.top() != (s[i] - 1)) && (c.top() != (s[i] - 2))))
    			c.push(s[i]);
    		else c.pop();
    	}
    	return c.empty();
    }
};
