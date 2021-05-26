#include "double_array_tree.h"
#include <iostream>

void test(){
    DoubleArrayTree *tree = new DoubleArrayTree();
    vector<string> strs {"apple"};
    tree->build(strs);
    vector<DoubleArrayTreeNode *> ans = tree->find("ap");
    if(ans.size() > 0){
        cout << ans[0]->c << endl;
    }
}

int main(){
    test();
    return 0;
}