//
// Created by sjhuang on 2021/7/18.
//

#include "binary_tree.h"


BinaryTree::BinaryTree(){
    buildTree();
}

BinaryTree::~BinaryTree(){
    // free(root);
    cout << "\nAll are Finished\n" << endl;
}

void BinaryTree::buildTree() {
    root = nullptr;
}

BinaryTreeNode *BinaryTree::insert(BinaryTreeNode *node, int val){
    if(!node) return new BinaryTreeNode(val);
    else{
        if(node->value > val){
            node->left = insert(node->left,val);
        }else if(node->value < val) {
            node->right = insert(node->right,val);
        }
        return node;
    }
}

void BinaryTree::insert(int val){
    root = insert(root,val);
}

BinaryTreeNode *BinaryTree::find(BinaryTreeNode *node, int val) {
    if(node){
        if(node->value == val) return node;
        else if(node->value > val) return find(node->left,val);
        else return find(node->right,val);
    }
    return nullptr;
}

void BinaryTree::inOrder(BinaryTreeNode *node) {
    if(node){
        inOrder(node->left);
        printf("- %d ",node->value);
        inOrder(node->right);
    }
}

void BinaryTree::preOrder(BinaryTreeNode *node) {
    if(node){
        printf("- %d ",node->value);
        preOrder(node->left);
        preOrder(node->right);
    }
}

void BinaryTree::postOrder(BinaryTreeNode *node) {
    if(node){
        postOrder(node->left);
        postOrder(node->right);
        printf("- %d ",node->value);
    }
}

void BinaryTree::levelOrder(BinaryTreeNode *node) {
    queue<BinaryTreeNode*> q;
    q.push(node);
    unsigned int sz = 0;
    while(!q.empty()){
        sz = q.size();
        for(unsigned int i =0; i < sz; i++){
            BinaryTreeNode *tmp = q.front();
            q.pop();
            printf("- %d ",node->value);
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
        cout << endl;
    }
}

void BinaryTree::loopInOrder(BinaryTreeNode *node) {

    stack<BinaryTreeNode *> s;
    while(!s.empty() || node){
        while(node){
            s.push(node);
            node = node->left;
        }
        node = s.top();
        printf("- %d ",node->value);
        s.pop();
        node = node->right;
    }
}


void BinaryTree::loopPreOrder(BinaryTreeNode *node) {

    stack<BinaryTreeNode *> s;
    while(!s.empty() || node){
        while(node){
            printf("- %d ",node->value);
            s.push(node);
            node = node->left;
        }
        node = s.top();
        s.pop();
        node = node->right;
    }
}

void BinaryTree::loopPostOrder(BinaryTreeNode *node) {

    stack<BinaryTreeNode *> s;
    BinaryTreeNode *prev = nullptr;
    while(!s.empty() || node){
        while(node){
            s.push(node);
            node = node->left;
        }
        node = s.top();
        if(node->right && node->right != prev){
            node = node->right;
        }else{
            printf("- %d ",node->value);
            s.pop();
            prev = node;
            node = nullptr;
        }
    }

}

bool BinaryTree::exist(int val) {
    BinaryTreeNode *node = find(root,val);
    return node;
}


void BinaryTree::travel(travel_sign sign) {

    switch (sign) {
        case IN_ORDER:
            printf("\n%d - [IN_ORDER travel]: \n",sign);
            inOrder(root);
            return;
        case PRE_ORDER:
            printf("\n%d - [PRE_ORDER travel]: \n",sign);
            preOrder(root);
            return;
        case POST_ORDER:
            printf("\n%d - [POST_ORDER travel]: \n",sign);
            postOrder(root);
            return;
        case LEVEL_ORDER:
            printf("\n%d - [LEVEL_ORDER travel]: \n",sign);
            levelOrder(root);
            return;
        case LOOP_IN_ORDER:
            printf("\n%d - [LOOP_IN_ORDER travel]: \n",sign);
            loopInOrder(root);
            return;
        case LOOP_PRE_ORDER:
            printf("\n%d - [LOOP_PRE_ORDER travel]: \n",sign);
            loopPreOrder(root);
            return;
        case LOOP_POST_ORDER:
            printf("\n%d - [LOOP_POST_ORDER travel]: \n",sign);
            loopPostOrder(root);
            return;
        default:
            printf("\nNo such method [%d] to travel all nodes of tree\n",sign);
            return;
    }
}



