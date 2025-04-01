# Con số vui vẻ
## Ý tưởng:
con số n sẽ là con số vui vẻ khi:
- n = 1 và n = 7
và ngược lại nó sẽ trở thành con số "unhappy" khi:
- n<10 (trừ hai số trên)
nếu n>=10 thì nó sẽ được tính:
- bình phương của mỗi hàng cộng lại cho đến khi trả về giá trị là 1

## Thuật toán:
```cpp
 while (n>0){
                int temp = n%10;
                sum += temp*temp;
                n /= 10;
            }return isHappy(sum);
```
- `temp`: gáng cho phần hàng (đơn vị, chục, trăm,...)
- `sum`: tổng bình phương hàng
- `n/=10`: loại bỏ các hàng đã có
- `return isHappy(sum)`: dùng đệ quy để thực hiện lặp
