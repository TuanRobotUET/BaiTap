bool isEqualCaseInsensitive(string s1, string s2){
    int n = s1.length();
    int m = s2.length();
    if(n != m) return false;
    for(int i = 0; i < n; i++){
        if(tolower(s1[i]) != tolower(s2[i])) return false;
    }
    return true;
}