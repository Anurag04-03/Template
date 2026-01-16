//NSR
    for (int i = n - 1; i >= 0; i--) {
        //removing all the useless elements
        while (!s.empty() && s.top() >= v[i]) {
            s.pop();
        }

        if (s.empty()) {
            ans[i] = -1;
        }
        else {
            ans[i] = s.top();
        }

        s.push(v[i]);
    }