# Hiệu của tích và tổng 

Khởi tạo: 
- `sum`_tổng là 0
- `prod`_tích là 1 (vì nếu đặt là 0 thì tất cả các số đưa vào sẽ là không => thuật toán lỗi)

## Thuật toán:
Sử dụng `while` với điều kiện dừng là `n != 0`
```cpp
while (n!=0){
           sum += n%10; 
           prod *= n%10;
           n /= 10;
        }return prod - sum;
```
- `sum += n%10;` : cộng các số hàng (đơn vị, chục, trăm,...)
- `prod *= n%10;` : nhân...(tương tự với cộng)
- ` n /= 10;` : loại bỏ hàng đã tính
- `return prod - sum;`: lấy hiệu của tích và tổng
