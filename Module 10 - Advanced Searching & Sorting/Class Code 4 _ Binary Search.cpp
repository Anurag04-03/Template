void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    auto helper = [&](int mid)->bool{
        return (v[mid]>=target);
    };
    int si=0,ei=n-1,ans=-1;
    //FFFFFFTTTTTT
    while(si<=ei){
        int mid = si + (ei-si)/2;
        if(helper(mid)){
            ans=mid;
            ei=mid-1;
        }
        else{
            si=mid+1;
        }
    }
    if(ans==-1){
        cout<<"Lower Bound does not exist"<<endl;
    }
    else{
        cout<<v[ans]<<endl;
    }

}