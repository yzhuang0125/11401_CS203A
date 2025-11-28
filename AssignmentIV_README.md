#Assignment IV README
##環境
- 作業系統：Windows
- 編譯器：g++ 11 / Visual Studio 2022  
- 開發工具：VS Code  
## Hash function 設計概念
- 方案
    1. Vector-Vector
        *有更多空間*
    2. Array-Linked List
        *插入刪除方便*
    3. Vector-Set
        - 插入刪除方便，也不需要更改設定prev和next
        - 支援Ordering
- 最終選擇
    - Vector-Set
    - 原因：
        1. 支援Ordering，用途廣
        2. Order和操作比Linked List更簡單方便
        3. 資料順序和結構看起來順眼、方便找尋

### 整數 Hash
- 設計概念：使用取模法，讓 key 均勻分布於 table
- 虛擬碼：

`function hashInt(key, m): <br>
return (key % m + m) % m`

### 字串 Hash
- 設計概念：使用多項式滾動 hash
- 虛擬碼：
- 
`function hashString(s, m): <br>
h = 0 <br>
for each character c in s: <br>
h = (h*31 + ord(c)) % m <br>
return h`


## Compilation, Build, Execution & Output

### Windows

`Makefile.bat <br>
Makefile.bat all <br>
Makefile.bat c <br>
Makefile.bat cxx <br>
Makefile.bat <br>
clean` 

## 測試結果

### 執行結果

`Int Hash Distribution: <br>
[0] size = 2 <br>
[1] size = 2 <br>
[2] size = 2 <br>
[3] size = 2 <br>
[4] size = 2 <br>
[5] size = 2 <br>
[6] size = 2 <br>
[7] size = 2 <br>
[8] size = 2 <br>
[9] size = 2 <br>
String Hash Distribution: <br>
[0] size = 1 <br>
[1] size = 1 <br>
[2] size = 2 <br>
[3] size = 2 <br>
[4] size = 2 <br>
[5] size = 2 <br>
[6] size = 2 <br>
[7] size = 1 <br>
[8] size = 1 <br>
[9] size = 1`

### 結果觀察
1. 整數 key 分布均勻
2. 字串 key 分布稍有不均勻
3. 增加 table size m 可改善均勻性

## Analysis
*因為以字典的例子來說，我想到set應該也能夠適用，問過GPT以後證實integer和string都能夠適用，且set寫法更方便且簡單。*

## Reflation
  1. 確認實用與可行性
  2. 考慮個人實力是否能執行
  3. 比較效率、複雜度

## 心得
    1. Github操作好難
    2. makefile好難
    3. 最簡單的是function本人
