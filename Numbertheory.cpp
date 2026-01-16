//Factoriztion

#include <utility>
int n;
    cin>>n;
    vector<int>fact;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            fact.push_back(i);
            if(i != n/i){
                fact.push_back(n/i);
            }
        }
    }
    // T.C :- O(sqrt(n))

//Prime Factorization using Trial Division(check how many prime divisor the no has)

//The above method works with the observation that if we iterate
//till sqrt(N), we will be able to generate all the factors of that
//number.

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

//The Sieve of Eratosthenes

//The Sieve of Eratosthenes is one of the most efficient ways to find
//all primes smaller than or equal to the number N.
//Through this method we can precompute all prime numbers less
//than or equal to le7.
//Time Complexity :- N * log (logN)

vector<bool> isPrime(n + 1, true);
isPrime [0] = isPrime[1] = false;

for (long long i = 2; i*i <=n; i++){
    if( isPrime [i] ){
for (long long j = i*i; j <=n; j+=i){
    // why iterate from i * i and not 2 * i
    isPrime [j ] = false;
}
    }
}

//SPF Method (Smallest Prime Factor) to check how many prime divisor the no has

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

//Using SPF for prime Factorization code

vector<pair<int , int >> primeFactorization(int x, vector<int>& spf){
vector<pair<int, int>> ans;
while(x! = 1){
    int prime = spf[x];
    int cnt = 0;
    while(x % prime == 0){
        cnt++;
        x = x / prime;
    }
    ans.push_back({prime,cnt});
}
return ans;
}
void solve(){
    int maxN= le6;
    vector<bool> isprime(maxM,true);
    vector<int>spf(1e6 , 1e9);
    for(long long i = 2; i < maxM; i++){
        if(isprime[i]){
            spf[i]=i;
            for(long long j = i* i; j < maxN; j += i){
                isprime[j]=false;
                spf[j] = min(spf[j],(int)i);
            }
        }
    }
vector<pair<int , int >> primeF = primeFactorization(36,spf);
}