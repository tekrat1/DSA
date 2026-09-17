class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        string rev_num= num;
        reverse(rev_num.begin(), rev_num.end());
        return num==rev_num;
    }
};