#include"seg_tree.h"

void SegTree::buildTree(vector<int> &arr,int node, int left, int right){
    if(left == right){
        tree[node] = arr[left];
    }else if(left < right){
        int mid = (left + right) >> 1;
        buildTree(arr, node * 2 + 1, left, mid);
        buildTree(arr, node * 2 + 2, mid + 1, right);
        tree[node] = tree[node * 2 + 1] + tree[node * 2 + 2];
    }
}

void SegTree::buildTree(vector<int> &arr){

    n = arr.size();
    int m = 2 * n + 2;
    tree = vector<int>(m, INT_MIN);
    buildTree(arr, 0, 0, n - 1);
}

SegTree::SegTree(vector<int> &arr){
    buildTree(arr);
}

SegTree::~SegTree()
{
    tree.clear();
}

int SegTree::query(int l, int r, int node, int ln, int rn){

    if(ln == l && ln == rn)
        return tree[node];
    else {
        int mid = (ln + rn) >> 1;
        if(r <= mid)
            return query(l, mid, node * 2 + 1, ln, mid);
        else if(l > mid)
            return query(mid + 1, r, node * 2 + 2, mid + 1, rn);
        else return query(l, mid, node * 2 + 1, ln, mid) + query(mid + 1, r, node * 2 + 2, mid + 1, rn);
    }
}

int SegTree::query(int l, int r){
    int node = 0,l0 = 0, r0 = n - 1;
    return query(l, r, node,l0,r0);
}

int SegTree::find_idx(int idx){
    int node = 0, l0 = 0, r0 = n - 1;
    if(idx > r0 || idx < l0)
        return -1;
    
    while(l0 < r0){
        int mid = (l0 + r0) >> 1;
        if(idx <= mid) {
            r0 = mid;
            node = node * 2 + 1;
        }else if(idx > mid){
            l0 = mid + 1;
            node = node * 2 + 2;
        } 
    }
    return node;
}

void SegTree::bottom_up(int k, int incr)
{
    while(k > 0){
        tree[k] += incr;
        k = k >> 1;
    }
    tree[k] += incr;
}

void SegTree::update(int idx, int val)
{
    int node = find_idx(idx);
    bottom_up(node, val - tree[node]);
}