#ifndef SEG_TREE
#define SEG_TREE
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class SegTree{
    private:
        int n;
        vector<int> tree;
        void buildTree(vector<int> &arr);
        void buildTree(vector<int> &arr, int node, int left, int right);
        int query(int l, int r, int node, int ln, int rn);
        void bottom_up(int k, int incr);
        int find_idx(int idx);

    public:
        SegTree(vector<int> &arr);
        ~SegTree();
        int query(int l, int r);
        void update(int idx, int val);
};

#endif