#include "seg_tree.h"

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    SegTree *seg = new SegTree(arr);

    // query[1,4]; sum of 2,3,4,5,
    int sum = seg->query(1, 4);
    cout << sum << endl;

    // update idx of 3: 4->10
    seg->update(3, 10);
    sum = seg->query(1, 4);
    cout << sum << endl;

    return 0;
}