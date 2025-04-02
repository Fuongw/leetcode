# xét hai cây có giống nhau hay không
## thuật toán
- Trường hợp_false:
```cpp
if (p!= NULL && q==NULL)
if (q!=NULL && p==NULL)
```
   một bên bằng rỗng và 1 bên khác rỗng
```cpp
(q->val != p->val)
```
   khác giá trị 
- Trường hợp_true:
```cpp
if (p==NULL && q==NULL)
```
cả hai đều rỗng

Đệ qui: `return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);` : để xét cả cây con phải và cây con trái
