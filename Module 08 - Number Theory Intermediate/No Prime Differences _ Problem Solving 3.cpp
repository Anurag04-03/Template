void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>ans(n,vector<int>(m));
    int cnt=1;
    for(int i=1;i<n;i+=2){
        for(int j=0;j<m;j++){
            ans[i][j]=cnt;
            cnt++;
        }
    }
    for(int i=0;i<n;i+=2){
        for(int j=0;j<m;j++){
            ans[i][j]=cnt;
            cnt++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}