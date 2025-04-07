### Biến dp[i][j]:
- dp[i][j] là giá trị boolean (true/false) cho biết liệu chuỗi con s[0..i-1] có khớp với chuỗi con p[0..j-1] hay không.

### khởi tạo
- dp[0][0] = true (Khi cả hai chuỗi đều rỗng, kết quả là true).
- Các phần tử dp[i][0] (khi chuỗi p rỗng) và dp[0][j] (khi chuỗi s rỗng) được khởi tạo tự động tùy theo quy tắc của biểu thức chính quy.
#### Cập nhật:
- khi gặp ký tự '*':

  - dp[i][j] có thể được xác định bởi hai trường hợp:

    1. Bỏ qua ký tự '*' và ký tự ngay trước đó trong p (tức là chuyển từ dp[i][j-2]).

    2. Sử dụng ký tự trước '*' và khớp với một ký tự trong s (tức là chuyển từ dp[i-1][j] nếu s[i-1] khớp với ký tự trước '*').

- Khi không gặp '*':
  - Kiểm tra nếu s[i-1] và p[j-1] khớp với nhau hoặc p[j-1] là dấu chấm (.), và cập nhật từ dp[i-1][j-1].
 
  - ### Testcase:
  - nput: s = "aa", p = "a*"
Output: true
Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".
