class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int r;
        long long m=llabs(x);
        while (x!=0) {
            r=x%10;
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return 0;
            }
            rev=rev*10+r;
            x=x/10;


        }
        if (rev==m){
            return 1;
        }
        else {
            return 0;
        }
        
    }
};