# số đối xứng
## thuật toán:
x = orgin (x ban đầu); rever = số nghịch đảo của x
- `if(x<0) return false;` : vì là số âm nên số không thể đối xứng
- `if(x<10) return true;` : các số thuộc hàng đơn vị đều có thể đối
- `rever = rever*10 + x%10;`: tạo ra số đảo ngược với x rồi so sánh số đó với
  TESTCASE: 121
  1. khi rever = 0 -> ta có được hàng đơn vị của x: 1 =>rever = 1
  2. khi rever = 1 -> tiếp với hàng chục của x: 2 => rever = 1*10 + 2 = 12
  3. khi rever = 2 -> cuối cùng là hàng trăm x: 1 => rever = 12*10 + 1 = 120
  4. khi này cả rever và orgin đều bằng nhau => **TRUE**
