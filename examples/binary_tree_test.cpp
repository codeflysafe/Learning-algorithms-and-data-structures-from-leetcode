#include "binary_tree.h"

int main() {

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

    return 0;
}
