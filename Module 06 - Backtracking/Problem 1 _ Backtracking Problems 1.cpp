bool helper(int idx,int sum,int n,vector<int>&v,int &target_sum){
    if(sum==target_sum){
        return true;
    }
    if(idx>=n){
        return false;
    }
    if(sum>target_sum){
        return false;
    }
    bool ans = helper(idx+1,sum+v[idx],n,v,target_sum);
    if(ans==true){
        return true;
    }
    ans = helper(idx+1,sum,n,v,target_sum);
    return ans; 
}

int solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target_sum;
    cin>>target_sum;
    bool ans = helper(0,0,n,v,target_sum);
    cout<<ans<<endl;
}