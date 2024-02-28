
int atoi(string s) {
    bool sign = true;
    int i = 0;
    int ans = 0;
    while (i < s.length()) {
        if (i == 0 && s[i] == '-') {
            sign = false;
            i++;
            continue;
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            int n = s[i] - '0';
            ans = ans * 10 + n;
            i++;
        }
        else {
            return -1;
        }
    }
    if (sign == false) {
        ans = -ans;
    }
    return ans;
