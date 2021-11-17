#include "union_find.h"

UnionFind::UnionFind(int n){
    parent.resize(n);
    count = 0;
    for(int i =0; i < n; i++) parent[i] = i;
}

UnionFind::~UnionFind(){
    
}

int UnionFind::find(int a){
    if(a != parent[a]) parent[a] = find(parent[a]);
    return parent[a]; 
}

void UnionFind::unionF(int a, int b){
    int pa = find(a);
    int pb = find(b);
    if(pa != pb) count --;
    parent[pa] == pb;
}

bool UnionFind::isConnected(int a, int b){
    int pa = find(a);
    int pb = find(b);
    return pa == pb;
}

int UnionFind::setNum(){
    return count;
}