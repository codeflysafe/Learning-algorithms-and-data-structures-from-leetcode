//
// Created by sjhuang on 2021/7/18.
//

#ifndef C_PROJECTS_BINARY_TREE_H
#define C_PROJECTS_BINARY_TREE_H

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<stack>
#include<unordered_map>
#include<queue>

using namespace  std;

enum travel_sign {IN_ORDER,PRE_ORDER,POST_ORDER,LEVEL_ORDER,LOOP_IN_ORDER,LOOP_PRE_ORDER,LOOP_POST_ORDER};

struct BinaryTreeNode{
    BinaryTreeNode *left, *right;
    int value;
    BinaryTreeNode():left(nullptr),right(nullptr),value(-1){};
    BinaryTreeNode(int val): left(nullptr),right(nullptr),value(val){};
    BinaryTreeNode(BinaryTreeNode* left, BinaryTreeNode* right,int val): left(left),right(right),value(val){};
};

class BinaryTree {
private:
    BinaryTreeNode *root;
    void buildTree();
    BinaryTreeNode *insert(BinaryTreeNode *node, int val);
    BinaryTreeNode *find(BinaryTreeNode *node, int val);
    void inOrder(BinaryTreeNode *node);
    void preOrder(BinaryTreeNode *node);
    void postOrder(BinaryTreeNode *node);
    void levelOrder(BinaryTreeNode *node);
    void loopInOrder(BinaryTreeNode *node);
    void loopPreOrder(BinaryTreeNode *node);
    void loopPostOrder(BinaryTreeNode *node);
public:
    BinaryTree();
    ~BinaryTree();
    void insert(int val);
    bool exist(int val);
    void travel(travel_sign sign);

};

#endif //C_PROJECTS_BINARY_TREE_H
