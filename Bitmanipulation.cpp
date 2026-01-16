int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int mask=0;mask<(1<<n);mask++){
        for(int i=0;i<n;i++){
            if(mask & (1<<i)){
                cout<<v[i]<<" ";
            }
            if(mask & (1<<i) == 1)
        }
        cout<<endl;
    }

    // T.c :- N*2^N