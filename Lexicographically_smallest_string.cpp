  string lexicographicallySmallest(string s, int k) {
  int n = s.length();
  if (n & (n - 1)) {
    k *= 2;
  } else {
    k /= 2;
  }

  if (k >= n)
    return "-1";

 // with stack
 stack<char> st;
 
 for ( auto ch : s)
 {
     while(!st.empty() && k>0 && ch<st.top())
     {
        st.pop();
         k--;
     }
    st.push(ch);
 }
 
 while(k>0 && !st.empty())
 {
     st.pop();
     k--;
 }
 
 string ans = "";
 while(!st.empty())
 {
     ans+=st.top();
     st.pop();
 }
 
 reverse(ans.begin(),ans.end());
 return ans;
  }
}
