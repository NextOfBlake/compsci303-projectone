#ifndef PROJECT2_BINARYTREE_H
#define PROJECT2_BINARYTREE_H

#include "print.h"

template<typename Item_Type>
struct BTNode
{
    Item_Type data;
    BTNode<Item_Type>* left;
    BTNode<Item_Type>* right;

    BTNode(const Item_Type& the_data,
           BTNode<Item_Type>* left_val = nullptr,
           BTNode<Item_Type>* right_val = nullptr) :
            data(the_data), left(left_val), right(right_val) {}

    virtual ~BTNode() {}
};

template<class Type>
class BinaryTree {
public:
    BinaryTree()
    {
        BinaryTree::root = new BTNode<Type>('0');
        console::print("Made Binary Tree");
    }
    BTNode<Type>* root;
//    static BTNode* left(BTNode*);
//    static BTNode* right(BTNode*);
};


#endif //PROJECT2_BINARYTREE_H
