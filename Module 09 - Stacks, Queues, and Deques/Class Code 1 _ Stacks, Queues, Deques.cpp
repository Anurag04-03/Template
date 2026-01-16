void solve() {
    ll p, q;
    cin >> p >> q;
    vector<int>primes;
    ll nq = q;
    //code of trial division to get all the prime factors
    for (int i = 2; i * i <= nq; i++) {
        if (nq % i == 0) {
            primes.push_back(i);
            while (nq % i == 0) {
                nq /= i;
            }
        }
    }
    if (nq > 1) {
        primes.push_back(nq);
    }
    ll ans = p;
    for (auto prime : primes) {
        ll a = 0, b = 0;
        ll nq = q, np = p;
        while (np % prime == 0) {
            a++;
            np /= prime;
        }
        while (nq % prime == 0) {
            b++;
            nq /= prime;
        }
        ll drop = a-b+1;
        ll val=1;
        for(int i=0;i<drop;i++){
            val*=prime;
        }
        ans=min(ans,val);
    }
    cout<< (p/ans) <<endl;


}