
/*
Given a string S that consists of only alphanumeric characters and dashes. The string is separated into N + 1 groups by N dashes. Also given an integer K. 

We want to reformat the string S, such that each group contains exactly K characters, except for the first group, 
which could be shorter than K but still must contain at least one character.
Furthermore, there must be a dash inserted between two groups, and you should convert all lowercase letters to uppercase.

Input: 
S = "5F3Z-2e-9-w", K = 4
Output: "5F3Z-2E9W"
Explanation: The string S has been split into two
parts, each part has 4 characters. Note that two
extra dashes are not needed and can be removed.
*/

class Solution
{
   public:
    string ReFormatString(string S, int K){
    	
    	string ans = "";
    	int count = 0;
    	
    	// traverse from behind
    	for(int i = S.size()-1;i>=0;i--)
    	{
            char ch = S[i];
            
            if(count == K)
            {
                    ans.push_back('-');
                count = 0; //reset count to 0
            }
            if(ch == '-')continue;
            else{
                ans.push_back(ch);
                count ++;
            }
    	}
    	
    	//reverse the answer 
    	reverse(ans.begin(),ans.end());
    	
    	//convert all lower case to upper case ( use '&' to change in place - take each element from ans by reference )
    	
    	for(auto &ch:ans)
    	{
    	        ch = toupper(ch);
    	}
    	
    	
    	//for removing extra '-' if present in the starting of string
    	if(ans[0]=='-')
    	    return ans.substr(1);
    	else return ans;
    }
};
