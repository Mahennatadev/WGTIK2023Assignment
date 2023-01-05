#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include<iostream>

using namespace std;

#define info(p) p->info
#define left(p) p->left
#define right(p) p->right

struct infotype {
    int newdata;
};

typedef struct Node * adrNode;

struct Node {
    adrNode left;
    infotype info;
    adrNode right;
};

adrNode newNode_1301213101(infotype newdata);
adrNode findNode_1301213101(adrNode &root, infotype x);
void insertNode_1301213101(adrNode &root, adrNode p);
void printPreOrder_1301213101(adrNode root);
void printDescendant_1301213101(adrNode root, infotype newdata);
int sumNode_1301213101(adrNode root);
int countLeaves_1301213101(adrNode root);
int heightTree_1301213101(adrNode root);


#endif // TREE_H_INCLUDED
