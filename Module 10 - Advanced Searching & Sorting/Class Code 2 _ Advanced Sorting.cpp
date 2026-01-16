#include<bits/stdc++.h>
#define ll long long
const int mod=1e9+7;
using namespace std;

int temp[100000];
int merge(vector<int>&arr,int si,int ei){
    int mid=(si+ei)/2;
        // si--mid   ,  mid+1-->ei
    int i=si,j=mid+1;
    int ans=0;
    int k=0;
    while(i<=mid && j<=ei){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++,k++;
        }
        else{
            temp[k]=arr[j];
            j++,k++;
            //number of elements remaining in left half
            ans+=(mid-i+1);
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        k++,i++;
    }

    while(j<=ei){
        temp[k]=arr[j];
        j++,k++;
    }

    int t=si;
    for(int i=0;i<=ei-si;i++){
        arr[t]=temp[i];
        t++;
    }
    return ans;

}

int mergesort(vector<int>&arr,int si,int ei){
    if(si>=ei){
        return 0;
    }
    int mid=(si+ei)/2;
    int ans=mergesort(arr,si,mid);
    ans+=mergesort(arr,mid+1,ei);
    ans+=merge(arr,si,ei);
    return ans;
}

int solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = mergesort(arr,0,n-1);
    cout<<ans<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main()
{
   
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}