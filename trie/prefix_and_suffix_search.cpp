#include <iostream>
#include <unordered_map>

using namespace std;

class WordFilter
{
public:
    struct TrieNode
    {
        int weight;
        unordered_map<char, TrieNode *> childs;
        TrieNode() : weight(-1){};
        TrieNode(int w) : weight(w){};
    };

    TrieNode *root;

    void insert(string s, int weight)
    {
        TrieNode *node = root;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (node->childs.count(c) == 0)
            {
                node->childs[c] = new TrieNode();
            }
            node = node->childs[c];
            node->weight = weight;
        }
    }

    WordFilter(vector<string> &words)
    {

        root = new TrieNode();
        for (int w = 0; w < words.size(); w++)
        {
            string word = words[w];
            string ww = "#" + word;
            for (int i = word.size() - 1; i >= 0; i--)
            {
                ww = word[i] + ww;
                insert(ww, w);
            }
        }
    }

    int f(string prefix, string suffix)
    {
        TrieNode *node = root;
        string key = suffix + "#" + prefix;
        for (int i = 0; i < key.size(); i++)
        {
            char c = key[i];
            if (node->childs.count(c) == 0)
                return -1;
            node = node->childs[c];
        }
        return node->weight;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */