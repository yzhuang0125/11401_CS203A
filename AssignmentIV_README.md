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
```function hashInt(key, m):
return (key % m + m) % m```

### 字串 Hash
- 設計概念：使用多項式滾動 hash
- 虛擬碼：
```function hashString(s, m):
h = 0
for each character c in s:
h = (h*31 + ord(c)) % m
return h```

## 4. Compilation, Build, Execution & Output

### Windows
```Makefile.bat
Makefile.bat all
Makefile.bat c
Makefile.bat cxx
Makefile.bat clean```

##測試結果
###執行結果
```Int Hash Distribution:
[0] size = 2
[1] size = 2
[2] size = 2
[3] size = 2
[4] size = 2
[5] size = 2
[6] size = 2
[7] size = 2
[8] size = 2
[9] size = 2
String Hash Distribution:
[0] size = 1
[1] size = 1
[2] size = 2
[3] size = 2
[4] size = 2
[5] size = 2
[6] size = 2
[7] size = 1
[8] size = 1
[9] size = 1`

###結果觀察
1. 整數 key 分布均勻
2. 字串 key 分布稍有不均勻
3. 增加 table size m 可改善均勻性

##Analysis
*因為以字典的例子來說，我想到set應該也能夠適用，問過GPT以後證實integer和string都能夠適用，且set寫法更方便且簡單。*

##Reflation
  1. 確認實用與可行性
  2. 考慮個人實力是否能執行
  3. 比較效率、複雜度
