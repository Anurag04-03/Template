string bin_string(int n){
    if(n<2){
        return to_string(n);
    }
    string ans = bin_string(n/2);
    int rem = (n%2);
    ans+=(to_string(rem));
    return ans;
}