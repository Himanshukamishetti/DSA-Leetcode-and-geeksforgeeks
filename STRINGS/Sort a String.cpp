string sort(string s) {
    // complete the function here
    vector<int>freq(26,0);
    for(char ch :s) freq[ch-'a']++;
    int index=0;
    for(int i=0;i<26;i++)
    {
        int count=freq[i];
        char ch='a'+i;
        while(count--) s[index++]=ch;
    }
    return s;
}