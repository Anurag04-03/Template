int solve()
{
    int n;
    cin >> n;
    vector<int>prime_factor;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
                prime_factor.push_back(i);
            }
        }
    }
    if (n > 1) {
        prime_factor.push_back(n);
    }
}