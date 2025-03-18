# Đếm các số giữa hai số lẻ [low; high]
## Thuật toán chính
```cpp
condition ? expression1 : expression2;
```

- conndition: ( high%2 == 0 ) && ( low%2 == 0 ) nếu cả high và low đều là số chẵn -> expression1 ,else -> expression2
- expression1: (high - low)/2 
- expression2: (high - low)/2 + 1
```cpp
 ( high%2 == 0 ) && ( low%2 == 0 ) ? (high - low)/2 : (high - low)/2 + 1;
```
