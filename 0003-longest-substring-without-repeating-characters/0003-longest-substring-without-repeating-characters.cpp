class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        if(s.size()==1)
        return 1;
        unordered_set<char>st;
        for(int i=0;i<s.size();i++){
            
            st.insert(s[i]);
          int j = i + 1; 
            while(j < s.size() && st.find(s[j]) == st.end()) {
                st.insert(s[j]);
                j++;
            }
            ans = max(ans, j - i); 
            st.clear();
        }
        return ans;
    }
};
