class Solution {
public:
    double fu(double x,long int n){
        if (n==0) return 1;
        if (n%2==0) return fu(x*x, n/2);
        return x*fu(x,n-1);
    }
    double myPow(double x,long int n) {
        if(n<0){
            x=1.0/x;
            n=-n;
        }return fu(x, n);
    }
};
