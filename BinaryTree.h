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
        BinaryTree::root = new BTNode<Type>('1');
        BinaryTree::empty = new BTNode<Type>('0');
        console::print("Made Binary Tree");
    }

    BTNode<Type>* root;
    BTNode<Type>* empty;

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
        while(!path.empty())
        {
            if(path.front() == 'R')
                node = node->right;
            if(path.front() == 'L')
                node = node->left;

            path.pop();
        }
        node->data = data;
    }

    inline BTNode<Type>* locate(BTNode<Type>* node, std::queue<char> path)
    {
        while(!path.empty())
        {
            if(path.front() == 'R')
                node = node->right;
            if(path.front() == 'L')
                node = node->left;

            path.pop();
        }
        return node;
    }

    inline std::string directionsTo(BTNode<Type>* node, Type target)
    {
        std::string path;
        std::vector<BTNode<Type>*> arr;

        if (this->hasPath(node, arr, target))
        {
            BTNode<Type>* root = arr[0];
            for(int i=1; i<arr.size(); i++)
            {
                if(root->right->data == arr[i]->data)
                    path.push_back('R');
                if(root->left->data == arr[i]->data)
                    path.push_back('L');

                root = arr[i];
            }
        }

        return path;
    }

    inline bool hasPath(BTNode<Type>* node, std::vector<BTNode<Type>*>& arr, Type target)
    {
        if(!node)
            return false;

        arr.push_back(node);

        if (node->data == target)
            return true;

        if (this->hasPath(node->left, arr, target) ||
            this->hasPath(node->right, arr, target))
            return true;

        arr.pop_back();
        return false;
    }
};


#endif //PROJECT2_BINARYTREE_H
