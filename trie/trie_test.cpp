#include "trie_template.h"
#include <iostream>

void insert(Trie *trie, vector<string> strs){
    for(string s:strs){
        trie->insert(s);
    }
}

void printNode(vector<string> ans)
{
    for (string s : ans)
    {
        cout << s << endl;
    }
}

void searchPrefix(Trie *trie, string s){
    vector<string> ans = trie->search(s);
    cout << "Search all strings with the same prefix [" << s << " ]" << endl;
    printNode(ans);
}

int main(){

    Trie *trie = new Trie();
    vector<string> strs = {"apple","app", "ap", "appl","a","ads","bds","app"};
    insert(trie,strs);
    string s = "app";
    searchPrefix(trie, s);

    return 0;
}