#include<bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;

int partition(vector<int>&arr, int si, int ei) {
    //considering the element at si to be our pivot
    int cnt = 0;
    for (int i = si + 1; i <= ei; i++) {
        if (arr[i] < arr[si]) {
            cnt++;
        }
    }
    int partition_index = si + cnt;
    swap(arr[si], arr[partition_index]);

    int i = si, j = partition_index + 1;
    while (i < partition_index && j <= ei) {
        if (arr[i] < arr[partition_index]) {
            i++;
            continue;
        }
        if (arr[j] >= arr[partition_index]) {
            j++;
            continue;
        }
        swap(arr[i], arr[j]);
        i++, j++;
    }

    return partition_index;
}

void quicksort(vector<int>&arr, int si, int ei) {
    if (si >= ei) {
        return;
    }
    int p = partition(arr, si, ei);
    quicksort(arr, si, p - 1);
    quicksort(arr, p + 1, ei);
}

int solve()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    quicksort(arr, 0, n - 1);
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl;
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