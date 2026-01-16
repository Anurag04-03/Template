void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++){
        pre[i] = (pre[i-1] ^ v[i]);
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;//changing to 0 -based indexing 
        cout<< (pre[r]^(l==0 ? 0 : pre[l-1]))<<endl;
    }
    // T.C :- O(N+Q)
}