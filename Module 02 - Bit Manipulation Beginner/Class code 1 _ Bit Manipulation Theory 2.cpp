void solve() {
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v)cin>>it;
    for(int i=1;i<=61;i++){
        ll num = (1LL<<i);
        set<ll>st;
        for(int j=0;j<n;j++){
            st.insert(v[j] % num);
        }
        if(st.size() == 2){
            cout<<num<<endl;
            return;
        }
    }
}