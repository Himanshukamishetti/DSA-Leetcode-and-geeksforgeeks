class Solution {

public:
    string minWindow(string s, string t) {
         if (t.length() > s.length()) return "";
        
        vector<int> freq(128, 0);   // Declare only once
        
        for (char ch : t)
            freq[ch]++;
        
        int left = 0, right = 0;
        int count = t.length();
        int minLen = INT_MAX;
        int startIndex = 0;
        
        while (right < s.length()) {
            
            if (freq[s[right]] > 0)
                count--;
            
            freq[s[right]]--;
            right++;
            
            while (count == 0) {
                
                if (right - left < minLen) {
                    minLen = right - left;
                    startIndex = left;
                }
                
                freq[s[left]]++;
                
                if (freq[s[left]] > 0)
                    count++;
                
                left++;
            }
        }
        
        return (minLen == INT_MAX) ? "" : s.substr(startIndex, minLen);
    }
};