// Prefix Sum

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+v[i];
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        cout<<pre[r] - ((l==0) ? 0 : pre[l-1])<<" ";
    }
    // T.C :- O(n+q)
    // S.C : -O(n)

}


void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<int>>pre(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            pre[i][j]=v[i][j];
            if(j>0){
                pre[i][j]+=pre[i][j-1];
            }
            if(i>0){
                pre[i][j]+=pre[i-1][j];
            }
            if(i>0 && j>0){
                pre[i][j]-=pre[i-1][j-1];
            }
            // pre[i][j]=pre[i][j-1]+pre[i-1][j]-pre[i-1][j-1]+v[i][j];
        }
    }//n^2
    int q;
    cin>>q;
    while(q--){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        int ans=pre[l2][r2];
        if(l1>0){
            ans-=pre[l1-1][r2];
        }
        if(r1>0){
            ans-=pre[l2][r1-1];
        }
        if(l1>0 && r1>0){
            ans+=pre[l1-1][r1-1];
        }
        cout<<ans<<" ";
        // ans=pre[l2][r2]-pre[l1-1][r2]-pre[l2][r1-1]+pre[l1-1][r1-1];
    }//q
    // T.C :- O(n^2+q)

}


// Difference Array

void solve() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)cin >> v[i]; //n
    
    int q;
    cin >> q;

    vector<int>diff(n + 1, 0);

    while (q--) {
        int l, r, x;
        cin >> l >> r >> x; //O-based indexing
        diff[l] += x;
        diff[r + 1] -= x;
    }
    //take prefix sum of diff array
    for (int i = 1; i <= n; i++) {
        diff[i] += diff[i - 1];
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] + diff[i] << " ";
    }
    cout << endl;
    //T.C:- O(n+q)
    //S.C :- O(n) 


}