int helper(int idx, string &num) {
    int n = num.size();
    if (idx == n) {
        return 1;
    }
    //single choice
    if (idx == n - 1) {
        if (num[idx] == '*') {
            return 9;
        }
        else {
            return 1;
        }
    }
    if (num[idx] == '*') {
        //**
        if (num[idx + 1] == '*') {
            //single char
            int ans = 0;
            ans += helper(idx + 1, num) * 9;
            //double char
            ans += helper(idx + 2, num) * 16;
            return ans;
        }
        //*[]
        else {
            //single char
            int ans = 0;
            ans += helper(idx + 1, num) * 9;
            //double char
            int temp = (num[idx + 1] - '0');
            if (temp <= 6) {
                ans += helper(idx + 2, num) * 2;
            }
            else {
                ans += helper(idx + 2, num) * 1;
            }
            return ans;
        }
    }
    else {
        // []*
        if (num[idx + 1] == '*') {
            int ans = 0;
            //single char
            if (num[idx] != '0') {
                ans += helper(idx + 1, num) * 1;
            }
            //double char
            int temp = (num[idx] - '0');
            if (temp <= 1) {
                ans += helper(idx + 2, num) * 9;
            }
            else if (temp == 2) {
                ans += helper(idx + 2, num) * 6;
            }
            return ans;
        }
        // [][]
        else {
            //single char
            int ans = 0;
            if (num[idx] != '0') {
                ans += helper(idx + 1, num) * 1;
            }
            // double char
            int temp = (num[idx] - '0') * 10 + (num[idx + 1] - '0');
            if (temp <= 26) {
                ans += helper(idx + 2, num) * 1;
            }
            return ans;
        }
    }
}
int solve()
{
    string s;
    cin >> s;
    int ans = helper(0, s);
    cout << ans << endl;
}