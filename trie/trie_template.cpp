#include "trie_template.h"

Trie::Trie()
{
    this->root = new TrieNode();
}

//Todo: 不太懂内存如何回收的
Trie::~Trie(){
  
}

TrieNode *Trie::searchPrefix (string s){
    int n = s.size();
    if(n == 0)
        return root;

    int i = 0;
    TrieNode *node = root;
    while (i < n)
    {
        char c = s[i];
        if (node->childs.find(c) != node->childs.end())
            node = node->childs[c];
        else
            return nullptr;
        i++;
    }
    return node;
}

void Trie::traverse(TrieNode *node, string s, vector<string> &ans)
{
    if(node){
        if(node->end)
            ans.push_back(s);
        for(auto &p: node->childs){
            string ss = s + p.second->val;
            traverse(node->childs[p.first], ss, ans);
        }
    }
}

void Trie::insert(string s)
{
    int n = s.size();
    if( n == 0)
        return;
    TrieNode *node = root;
    int i = 0;
    while(i < n){
        char c = s[i];
        if (node->childs.find(c) == node->childs.end())
            node->childs[c] = new TrieNode(c);
        node = node->childs[c];
        i++;
    }
    node->end = true;
}

bool Trie::exists (string s){
    TrieNode *node = searchPrefix(s);
    return node;
}

vector<string> Trie::search(string s)
{
    vector<string> ans;
    TrieNode *node = searchPrefix(s);
    if(node){
        traverse(node, s, ans);
    }
    return ans;
}