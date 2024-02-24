        vector<int> v(n);
        for(int i=0; i<n ; i++){
            cin>>v[i];
        }
        int firstindex,lastindex,count=0;
        for(int i=0; i<n ;i++){
            if(v[i]==1){
                firstindex=i;
                break;
            }
        }
        for(int k=n-1 ; k>=0 ; k--){
            if(v[k]==1){
                lastindex=k;
                break;
            }
            // cout<<k<<endl;