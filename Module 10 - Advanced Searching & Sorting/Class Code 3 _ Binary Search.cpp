void solve()
{
    ll n;
    cin>>n;
    ll si=1,ei=1e9,ans=-1;
    // TTTTTTTTTTTFFFFFFFFF
    auto helper = [&](ll mid)->bool{
        return (mid*mid<=n);
    };
    vector<int>arr(n);
    auto helper = [&](auto &&self,ll mid)->bool{
        //base case
        return self(self,/*parameters*/);   
    }
    helper(helper,/*parameter*/);
    while(si<=ei){
        ll mid = si + (ei-si)/2;
        if(helper(mid)){
            ans=mid;
            si=mid+1;
        }
        else{
            ei=mid-1;
        }
    }
    cout<<ans<<endl;
    // FFFFFFFTTTTTTT
    // while(si<=ei){
    //     ll mid = si + (ei-si)/2;
    //     if(helper(mid,n)){
    //         ans=mid;
    //         ei=mid-1;
    //     }
    //     else{
    //         si=mid+1;
    //     }
    // }
}
