string s;
    cin>>s;
    int n = s.length();

    int base = 1;
    int ans = 0;

    for (int i=n-1; i>0; i--){
        if(s[i] == '1'){
            ans += base;
        }
    }