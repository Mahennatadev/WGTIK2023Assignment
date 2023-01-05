#include"Tree.h"

using namespace std;

adrNode newNode_1301213101(infotype newdata){
    adrNode P = new Node;
    info(P) = newdata;
    left(P) = NULL;
    right(P) = NULL;

    return P;
}
adrNode findNode_1301213101(adrNode &root, infotype x){
    if (root == NULL){
        return NULL;
    }
    if (info(root).newdata == x.newdata){
        return root;
    }
    adrNode left = findNode_1301213101(left(root), x);
    if (left != NULL){
        return left;
    }
    adrNode right = findNode_1301213101(right(root), x);
    if (right != NULL){
        return right;
    }

    return NULL;
}
void insertNode_1301213101(adrNode &root, adrNode p){
    if (root == NULL){
        root = p;
    } else {
        if (info(p).newdata < info(root).newdata){
            insertNode_1301213101(left(root), p);
        } else {
            insertNode_1301213101(right(root), p);
        }
    }
}
void printPreOrder_1301213101(adrNode root){
    if (root != NULL){
        cout << info(root).newdata << " ";
        printPreOrder_1301213101(left(root));
        printPreOrder_1301213101(right(root));
    }
}
void printDescendant_1301213101(adrNode root, infotype newdata){
    if (root != NULL){
        adrNode Search = findNode_1301213101(root, newdata);
        if (Search != NULL){
            printPreOrder_1301213101(left(Search));
            printPreOrder_1301213101(right(Search));
        }
    } else {
        cout << "//Data Root Kosong" << endl;
    }
}
int sumNode_1301213101(adrNode root){
    if (root == NULL){
        return 0;
    } else {
        return info(root).newdata + sumNode_1301213101(left(root)) + sumNode_1301213101(right(root));
    }
}
int countLeaves_1301213101(adrNode root){
    if (root == NULL){
        return 0;
    }
    if (left(root) == NULL && right(root) == NULL){
        return 1;
    }
    return countLeaves_1301213101(left(root)) + countLeaves_1301213101(right(root));
}
int heightTree_1301213101(adrNode root){
    if (root == NULL){
        return -1;
    }
    int left = heightTree_1301213101(left(root));
    int right = heightTree_1301213101(right(root));
    if (left > right){
        return left = left + 1;
    } else {
        return right = right + 1;
    }
}
