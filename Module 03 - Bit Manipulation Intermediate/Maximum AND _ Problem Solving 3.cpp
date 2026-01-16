ll n, k;
    cin >> n >> k;
    vector<ll>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<pair<ll,ll>>contribution(31);
    for (int i = 0; i <= 30; i++) {
        ll cnt = 0;
        for (int j = 0; j < n; j++) {
            if (v[j] & (1 << i)) {
                cnt++;
            }
        }
        contribution[i] = {(cnt*(1 << i)),i*-1};
    }
    sort(contribution.rbegin(),contribution.rend());
    ll ans=0;
    for(int i=0;i<k;i++){
        int bit_to_set = abs(contribution[i].second);
        ans = (ans | (1<<bit_to_set));
    }
    cout<<ans<<endl;