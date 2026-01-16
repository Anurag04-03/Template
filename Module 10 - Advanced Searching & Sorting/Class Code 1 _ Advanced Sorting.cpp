#include<bits/stdc++.h>
#define ll long long
const int mod=1e9+7;
using namespace std;

int temp[100000];
void merge(vector<int>&arr,int si,int ei){
    int mid=(si+ei)/2;
        // si--mid   ,  mid+1-->ei
    int i=si,j=mid+1;
    int k=0;
    while(i<=mid && j<=ei){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++,k++;
        }
        else{
            temp[k]=arr[j];
            j++,k++;
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

}

void mergesort(vector<int>&arr,int si,int ei){
    if(si>=ei){
        return;
    }
    int mid=(si+ei)/2;
    mergesort(arr,si,mid);
    mergesort(arr,mid+1,ei);
    merge(arr,si,ei);
}

int solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
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