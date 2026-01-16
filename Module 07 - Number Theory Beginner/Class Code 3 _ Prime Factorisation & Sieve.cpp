const int N=1e7;
int spf[N];
// prime[i]=1 --> i is a prime number

int solve()
{
    int n;
    cin>>n;
    vector<int>prime_factors;
    while(n>1){
        prime_factors.push_back(spf[n]);
        n/=spf[n];
    }
}

int main()
{
    for(int i=0;i<N;i++){
        spf[i]=i;
    }
    for(int i=2;i*i<N;i++){
        if(spf[i]==i){
            for(int j=i*i;j<N;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    // O(nlog(n))
    // O(nlog(logn))

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}