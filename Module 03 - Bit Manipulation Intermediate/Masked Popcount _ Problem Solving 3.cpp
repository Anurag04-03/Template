ll n, m;
    cin >> n >> m;
    ll ans = 0;
    for (int i = 0; i < 60; i++) {
        if (m & (1LL << i)) {
            ll temp = n;
            temp >>= (i + 1);
            temp *= (1LL << i);
            if (n & (1LL << i)) {
                temp += ((n % (1LL << i)) + 1);
            }
            ans += temp;
        }
        
    }
    cout << ans << endl;