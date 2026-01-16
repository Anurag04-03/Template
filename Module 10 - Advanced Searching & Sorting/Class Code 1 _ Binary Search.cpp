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

    int si=0,ei=n-1;
    while(si<=ei){
        int mid = si + (ei-si)/2;
        if(v[mid]==target){
            cout<<"Yes"<<endl;
            return;
        }
        else if(v[mid]>target){
            ei=mid-1;
        }
        else{
            si=mid+1;
        }
    }
    cout<<"No"<<endl;
}