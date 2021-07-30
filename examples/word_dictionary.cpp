#include<iostream>
#include<map>

using namespace std;

class WordDictionary
{
public:
    struct Trie
    {
        bool leaf;
        map<char, Trie *> childs;
        Trie() : leaf(false){};
    };

    Trie *trie;

    /** Initialize your data structure here. */
    WordDictionary()
    {
        trie = new Trie();
    }

    void addWord(string word)
    {
        int n = word.size();
        if (n == 0)
            return;
        int i = 0;
        Trie *node = trie;
        while (i < n)
        {
            char c = word[i];
            if (node->childs.find(c) == node->childs.end())
            {
                node->childs[c] = new Trie();
            }
            node = node->childs[c];
            i++;
        }
        node->leaf = true;
    }

    bool search(string word, Trie *node, int i)
    {

        if (i == word.size() && node)
            return node->leaf;
        char c = word[i];
        if (c != '.')
        {
            if (node->childs.find(c) == node->childs.end())
                return false;
            else
                return search(word, node->childs[c], i + 1);
        }
        // if(search(word,node,i+1)) return true;
        for (auto &p : node->childs)
        {
            if (search(word, p.second, i + 1))
                return true;
        }
        return false;
    }

    bool search(string word)
    {
        return search(word, trie, 0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */

