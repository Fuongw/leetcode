# DI CHUYỂN 0 XUỐNG CUỐI MẢNG
##thuật toán
-`int k = 0;` : để k = 0 theo dõi vị trí phần tử khác 
-
```cpp
if(nums[i] != 0){
                nums[k++] = nums[i];
            }
```
 - khi thứ tự bất kì khác không gán thứ tự đó vào thứ tự k sau đó tăng k lên 1 đơn vị
- `for ( ;k < nums.size(); k++)` : sau khi chuyển các số 0 lên đầu, k trỏ đến phần tử đầu chưa được gán
- `nums[k] = 0;` gán tất cả các phần tử từ k đến cuối mảng thành 0

## testcase
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
