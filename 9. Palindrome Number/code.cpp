class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x<10) return true;

        long long orgin = x, rever = 0;
        while (x>0){
            rever = rever*10 + x%10;
            x/=10;
        }return orgin == rever;
    }
};
