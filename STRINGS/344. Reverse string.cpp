class Solution {
public:
    void reverseString(vector<char>& s) {
    // int n=s.size();
    // int left =0;
    // int right = n-1;
    // while(left<right){
        //swap
        // swap(s[left++],s[right--]);
    // }

    stack<char> st;
    for(char ch : s){
        st.push(ch);
    }
    for(int i=0;i<s.size();i++){
        s[i] = st.top();
        st.pop();
    }
    }
};