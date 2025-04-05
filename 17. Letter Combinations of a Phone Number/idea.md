# Các phím trên điện thoại
## Mục đích:
2 -> "abc"
3 -> "def"
4 -> "ghi"
5 -> "jkl"
6 -> "mno"
7 -> "pqrs"
8 -> "tuv"
9 -> "wxyz"
## Ý nghĩa:
`dp[n+1][m+1]`
- `dp[i][j] = true`
  s:i & p: j
## Thuật toán:
```cpp
vector<string> pad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv","wxyz"};
```
- với lần lượt với mỗi số ta có kí tự đi kèm: 0,1->"", 2->"a,b,c",...
```cpp
vector<string> output;
output.push_back("");
```
- khởi tạo output với 1 phần tử rỗng
```cpp
for(auto key : digits){
```
- duyệt từng chữ số
```cpp
vector<string> temp;
for(auto candidate : pad[key-'0']){
    for (auto c : output){
        temp.push_back(c + candidate);
    }
}
```
- key = 2 -> pad[2] = "abc"
- key = 3 -> pad[3] = "def"
  "a" + d,e,f -> "ad", "ae", "af"
  "b" + d,e,f -> "bd", "be", "bf"
  "c" + d,e,f -> "cd", "ce", "cf"
  
