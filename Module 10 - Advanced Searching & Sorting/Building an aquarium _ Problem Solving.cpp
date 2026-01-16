#include<bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;


// bool helper(ll h,vector<ll>&v,ll x){
//     ll sum=0;
//     for(auto it:v){
//         sum+=max(0LL,h-it);
//     }
//     return (sum<=x);
// }

void solve()
{
    ll n;
    cin >> n;
    ll x;
    cin>>x;
    vector<ll>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    auto helper = [&](ll h)->bool{
        ll sum=0;
        for(auto it:v){
            sum+=max(0LL,h-it);
        }
        return (sum<=x);
    };

    ll si = 1, ei = 1e12, ans = -1;
    //TTTTTTTFFFFFFF
    while (si <= ei) {
        ll mid = si + (ei - si) / 2;
        if(helper(mid)){
            ans=mid;
            si=mid+1;
        }
        else{
            ei=mid-1;
        }
    }
    cout<<ans<<endl;

}


int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}