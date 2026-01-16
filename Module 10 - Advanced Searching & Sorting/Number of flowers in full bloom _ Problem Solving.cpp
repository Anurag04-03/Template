class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int m=people.size();
        vector<pair<int,int>>v;
        for(int i=0;i<m;i++){
            v.push_back({people[i],i});
        }
        sort(v.begin(),v.end());
        vector<int>diff(m+1,0);
        for(auto it:flowers){
            int start = it[0];
            int end = it[1];
            pair<int,int>temp= {start,INT_MIN};
            int idx = lower_bound(v.begin(),v.end(),temp) - v.begin();
            diff[idx]++;
            temp = {end+1,INT_MIN};
            idx = lower_bound(v.begin(),v.end(),temp) - v.begin();
            diff[idx]--;
        }
        for(int i=1;i<=m;i++){
            diff[i]+=diff[i-1];
        }
        vector<int>ans(m);
        for(int i=0;i<m;i++){
            ans[v[i].second] = diff[i];
        }
        return ans;
    }
};