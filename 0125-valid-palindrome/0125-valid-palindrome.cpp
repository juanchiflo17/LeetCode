class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size();) {
            //cout << s[i];
            s[i] = tolower(s[i]);
            if (!iswalnum(s[i])) s.erase(s.begin() + i);
            else i++;
            //cout << " " << s << endl;
        }
        int l = 0;
        int r = s.size()-1;
        //cout << s << " " << " " << l << " " << r;
        for (;l < r; l++, r--) {
            if (s[l] != s[r]) return false;
        }
        return true;
    }
};
