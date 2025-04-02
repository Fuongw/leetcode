# Tính mũ:
-số x có mũ là n
## thuật toán
```cpp
double fu(double x,long int n){
        if (n==0) return 1;
        if (n%2==0) return fu(x*x, n/2);
        return x*fu(x,n-1);
    }
```
ta cho trường hợp:
- `(n==0)` x sẽ trả về là 1
- `(n%2==0)` nếu n là mũ chẵn thì bài toán sẽ có công thức là `x^n = (x^2)^(n/2)` dùng đệ quy để giảm số phép nhân
- trường hợp nếu n lẻ:  `x^n = x*x^(n-1)`
```cpp
double myPow(double x,long int n) {
        if(n<0){
            x=1.0/x;
            n=-n;
        }return fu(x, n);
    }
```
trường hợp:
- n<0: ta sẽ chuyển về dạng lũy thừa rồi đổi dấu n thành dương `n=-n;`
   sau `return fu(x, n);` đó tính `x^n` như bình thường
