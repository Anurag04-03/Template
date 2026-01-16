int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;

    //lower_bound(5)
    int index = lower_bound(v.begin(),v.end(),10) - v.begin();
    if(index==n){
        cout<<"Required Element does not exist"<<endl;
    }
    else{
        cout<<v[index]<<endl;
    }
    index = upper_bound(v.begin(),v.end(),5) - v.begin();
    if(index==n){
        cout<<"Required Element does not exist"<<endl;
    }
    else{
        cout<<v[index]<<endl;
    }