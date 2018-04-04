//Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

//For example,
//"A man, a plan, a canal: Panama" is a palindrome.
//"race a car" is not a palindrome.

//Note:
//Have you consider that the string might be empty? This is a good question to ask during an interview.

//For the purpose of this problem, we define empty string as valid palindrome.

class Solution {
public:
    bool isPalindrome(string s) {
       	string::iterator it = s.begin();
	    while (it != s.end())
	    {
		    if ((*it < 65) || (*it >90 && *it < 97) || (*it > 122))
		    	s.erase(it);
		    else
		    {
		    	it++;
		    }
	    }
    if (s.length() < 2)
		return true;
	string::iterator last = s.end() - 1;
	it = s.begin();
	while ((it != last) && (last +1 != it))
	{
		if ((*it == *last) || ((*it) + 32 == *last) || ((*it) - 32 == *last))
		{
			it++;
			last--;
		}
		else
		{
			return false;
		}
	}
	return true;
    }
};

