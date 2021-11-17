#ifndef UNION_FIND
#define UNION_FIND
#include<vector>
#include<iostream>

using namespace std;

class UnionFind{
    private:
       vector<int> parent;
       int count;
    public:
       UnionFind(int n);
       ~UnionFind();
       int find(int a);
       void unionF(int a, int b);
       bool isConnected(int a, int b);
       int setNum();
}

#endif