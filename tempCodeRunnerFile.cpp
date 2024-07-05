
    string t;
    cin >> t;
    int ans=0;
    for(int i=0 ; i<n ; i++){
        ans+=min(abs(s[i]-t[i]),abs(max(s[i],t[i])-'9')+abs((min(t[i],s[i])-'0')+1));
        