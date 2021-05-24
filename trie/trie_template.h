#ifndef TRIE_TEMPLATE
#define TRIE_TEMPLATE
#include <map>
#include <string>
#include <vector>
using namespace std;
/**
 * @brief 前缀树的节点
 * 
 */
struct TrieNode
{
    char val;
    map<char, TrieNode *> childs;
    bool end;
    TrieNode(char v):val(v),end(false){};
    TrieNode():end(false){};
};

class Trie{

    private: 
       // 根结点
       TrieNode *root;
       /**
        * @brief 匹配字符串
        * 
        * @param s 待查询的字符串前缀
        * @return TrieNode* 对应的节点
        */
       TrieNode *searchPrefix(string s);
       void traverse(TrieNode *node, string s, vector<string> &ans);

   public:

       Trie();
       ~Trie();
       /**
        * @brief 向字典树里插入节点
        * 
        * @param s 待插入的字符串
        */
       void insert(string s);
       /**
        * @brief 判断字符串是否存在
        * 
        * @param s 待查询的字符串
        * @return true 存在
        * @return false 不存在
        */
       bool exists(string s);
       /**
        * @brief 查询所有前缀为`s`的字符串
        * 
        * @param s 待匹配的字符串前缀
        * @return vector<string> 字符串集合
        */
       vector<string> search(string s);
};

#endif