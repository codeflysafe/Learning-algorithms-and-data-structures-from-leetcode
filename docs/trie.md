# Trie (前缀树、字典树)

`Trie` 是处理字符串匹配或者字符串前缀搜索的一种数据结构，因此又称为前缀树。一个简单的例子：

将一组字符串(`['a','ad','cp','cog','dog']`)放入到字典树中, 构造的字典树如下:

[![2958C4.png](https://z3.ax1x.com/2021/05/26/2958C4.png)](https://imgtu.com/i/2958C4)

## 实现

如果已经知道字符串的取值范围只限于英文字符，便可以采用静态数组实现（但是存在大量的空间浪费）。因此可以进一步，使用hash表加树实现；

下面是采用静态数组实现的一个模版：‘

```c++
struct trie {
  int nex[100000][26], cnt;
  bool exist[100000];  // 该结点结尾的字符串是否存在

  void insert(char *s, int l) {  // 插入字符串
    int p = 0;
    for (int i = 0; i < l; i++) {
      int c = s[i] - 'a';
      if (!nex[p][c]) nex[p][c] = ++cnt;  // 如果没有，就添加结点
      p = nex[p][c];
    }
    exist[p] = 1;
  }
  bool find(char *s, int l) {  // 查找字符串
    int p = 0;
    for (int i = 0; i < l; i++) {
      int c = s[i] - 'a';
      if (!nex[p][c]) return 0;
      p = nex[p][c];
    }
    return exist[p];
  }
};
```

由于含有大量的空间浪费，后面又有了进阶的版本：`三数组Trie` 和 `二数组Trie`

## 前缀树与`hash`表
使用前缀树和`hash`表有何区别呢:

**时间复杂度：**

|使用场景|Trie|Hash|
|---|---|---|
|字符串匹配|O(L)|O(L)|
|某个前缀的字符串匹配|O(NL)|O(L)｜

**空间复杂度：**

与Trie的实现方式有很大的关系，如果采用静态数组实现，则并不一定能够减少空间使用。如果采用二数组或者三数组能够大大的减少空间浪费（因为可以共享一些字符）。

## 应用

1. 字符串查找
2. 维护异或值（将整数看成一个二进制字符串)
3. 前缀匹配（如当输入一个网址，可以自动搜索出可能的选择。当没有完全匹配的搜索结果，可以返回前缀最相似的可能）
4. NLP 里的分词和词频统计会使用到
## related problems



[211. 添加与搜索单词 - 数据结构设计](https://leetcode-cn.com/problems/design-add-and-search-words-data-structure/) [solution](../examples/word_dictionary.cpp)

[745. 前缀和后缀搜索](https://leetcode-cn.com/problems/prefix-and-suffix-search/) [solution](../examples/prefix_and_suffix_search.cpp)