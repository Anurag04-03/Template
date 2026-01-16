const int N = 2e5;
int power[N];
void solve() {
    int n;
    cin >> n;
    vector<ll>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    power[2] = 1;
    for (int i = 3; i < N; i++) {
        power[i] = (i / 2) + power[i / 2];
    }
    ll ans = 0;
    for (int i = 0; i < n ; i++) {
        ll c1 = power[n - 1];
        ll c2 = power[i];
        ll c3 = power[n - 1 - i];
        if ((c1 - c2 - c3) == 0) {
            ans = (ans ^ v[i]);
        }
    }
    cout << ans << endl;

}