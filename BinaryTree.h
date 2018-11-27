#ifndef PROJECT2_BINARYTREE_H
#define PROJECT2_BINARYTREE_H

#include "print.h"
#include "BTNode.h"
#include <queue>

template<class Type>
class BinaryTree {
public:
    //CONSTRUCTOR
    BinaryTree()
    {
        BinaryTree::root = new BTNode<Type>('1');
        console::print("Made Binary Tree");
    }

    BTNode<Type>* root;

    //CREATE A BALANCED TREE OF A CERTAIN DEPTH
    inline void balancedTree(BTNode<Type>* node, int depth)
    {
        if(depth == 0)
            return;

        node->left = new BTNode<Type>('0');
        node->right = new BTNode<Type>('0');

        this->balancedTree(node->left, depth - 1); //build tree left
        this->balancedTree(node->right, depth - 1); //build tree right
    }

    //INSERT NODE DATA GIVEN THE PATH TO THAT NODE: RLLR
    inline void insert(BTNode<Type>* node, std::queue<char> path, Type data)
    {
        node = this->locate(node, path);
        node->data = data; //return found node's data
    }

    //LOCATE NODE GIVEN A PATH: RLLR
    inline BTNode<Type>* locate(BTNode<Type>* node, std::queue<char> path)
    {
        while(!path.empty()) //go down the tree using all directions
        {
            if(path.front() == 'R')
                node = node->right;
            if(path.front() == 'L')
                node = node->left;

            path.pop();
        }
        return node; //return node
    }

    //SEARCH FOR TARGET IN TREE AND RETURN DIRECTIONS: RLLR
    inline std::string directionsTo(BTNode<Type>* node, Type target)
    {
        std::string path;
        std::vector<BTNode<Type>*> arr; //ancestor nodes

        if (this->hasPath(node, arr, target))
        {
            BTNode<Type>* root = arr[0];
            for(int i=1; i<arr.size(); i++) // starting from root. find the direction of each child
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

    //SEARCH FOR TARGET AND PRESERVE THE NODES THAT CAME BEFORE IT
    inline bool hasPath(BTNode<Type>* node, std::vector<BTNode<Type>*>& arr, Type target)
    {
        if(!node) // node is null
            return false;

        arr.push_back(node); //add potential ancestor

        if (node->data == target) //found it!
            return true;

        if (this->hasPath(node->left, arr, target) || //search left
            this->hasPath(node->right, arr, target)) //search right
            return true;

        arr.pop_back();
        return false; //default to false
    }
};


#endif //PROJECT2_BINARYTREE_H
