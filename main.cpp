#include "trie/double_array_tree.h"
#include <iostream>
using namespace std;

void test()
{
    DoubleArrayTree *tree = new DoubleArrayTree();
    vector<string> strs{"apple"};
    tree->build(strs);
    vector<DoubleArrayTreeNode *> ans = tree->find("apple");
    if (ans.size() > 0)
        cout << ans[0]->c << endl;
}

int main()
{
    test();
    return 0;
}