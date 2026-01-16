struct custom_compare{
    bool operator()(pair<int,int>&a,pair<int,int>&b){
        //on the basis of first value -->min priority queue
        //on the basis of second value  -->max priority queue
        if(a.first==b.first){
            return (a.second < b.second);
        }
        return (a.first > b.first);
    }
};
int solve()
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,custom_compare>pq;
    pq.push({3,2});
    pq.push({3,4});
    pq.push({2,1});
    pq.push({6,3});
    cout<<pq.top().first<<" "<<pq.top().second<<endl;
    pq.pop();
    cout<<pq.top().first<<" "<<pq.top().second<<endl;
}