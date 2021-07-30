//
// Created by sjhuang on 2021/7/30.
//
#include <iostream>
#include "binary_tree.h"
#include "double_array_tree.h"
#include "trie_template.h"
#include "seg_tree.h"

using namespace  std;

void binary_tree_test(){
    auto *tree = new BinaryTree();
    vector<int> nums = {5,3,2,1,4,9,6,7,10};
    for(int num : nums) tree->insert(num);
    tree->travel(LOOP_POST_ORDER);
    tree->travel(POST_ORDER);


    tree->travel(LOOP_PRE_ORDER);
    tree->travel(PRE_ORDER);


    tree->travel(LOOP_IN_ORDER);
    tree->travel(IN_ORDER);
    // 回收内存
    delete tree;
}


void double_array_tree_test(){
    DoubleArrayTree *tree = new DoubleArrayTree();
    vector<string> strs {"apple"};
    tree->build(strs);
    vector<DoubleArrayTreeNode *> ans = tree->find("apple");
    if(ans.size() > 0){
        cout << ans[0]->c << endl;
    }
}


void seg_tree_test(){
    vector<int> arr = {1, 2, 3, 4, 5};
    SegTree *seg = new SegTree(arr);

    // query[1,4]; sum of 2,3,4,5,
    int sum = seg->query(1, 4);
    cout << sum << endl;

    // update idx of 3: 4->10
    seg->update(3, 10);
    sum = seg->query(1, 4);
    cout << sum << endl;

}
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
    cout << "Search all strings with the same prefix [ " << s << " ]" << endl;
    printNode(ans);
}

void trie_test(){
    Trie *trie = new Trie();
    vector<string> strs = {"apple","app", "ap", "appl","a","ads","bds","app"};
    insert(trie,strs);
    string s = "app";
    searchPrefix(trie, s);
}

int main(string args){
    trie_test();
    return 0;
}