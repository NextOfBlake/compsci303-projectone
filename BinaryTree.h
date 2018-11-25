#ifndef PROJECT2_BINARYTREE_H
#define PROJECT2_BINARYTREE_H

#include "print.h"
#include <queue>

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
    BinaryTree(int depth)
    {
        BinaryTree::root = new BTNode<Type>('0');
        console::print("Made Binary Tree");
    }

    BTNode<Type>* root;

    inline void balancedTree(BTNode<Type>* node, int depth)
    {
        if(depth == 0)
            return;

        node->left = new BTNode<Type>('0');
        node->right = new BTNode<Type>('0');

        this->balancedTree(node->left, depth - 1);
        this->balancedTree(node->right, depth - 1);
    }
    inline void insert(BTNode<Type>* node, std::queue<char> path, Type data)
    {
        console::print<' '>("{", data, "}");

        while(!path.empty())
        {
            if(path.front() == 'R')
                node = node->right;
            if(path.front() == 'L')
                node = node->left;

            console::print<' '>(path.front());
            path.pop();
        }

        console::print(' ');
        node->data = data;
    }
};


#endif //PROJECT2_BINARYTREE_H
