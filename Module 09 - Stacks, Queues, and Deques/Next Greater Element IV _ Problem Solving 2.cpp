vector<int> secondGreaterElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>sngr(n,-1);
        stack<int>s1,s2;
        for(int i=0;i<n;i++){
            while(!s2.empty() && nums[i] > nums[s2.top()]){
                sngr[s2.top()]=nums[i];
                s2.pop();
            }
            stack<int>temp;
            while(!s1.empty() && nums[i] > nums[s1.top()]){
                temp.push(s1.top());
                s1.pop();
            }
            while(!temp.empty()){
                s2.push(temp.top());
                temp.pop();
            }
            s1.push(i);
        }
        return sngr;
    }