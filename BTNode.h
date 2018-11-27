#ifndef PROJECT2_BTNODE_H
#define PROJECT2_BTNODE_H

//A BINARY TREE NODE
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

#endif //PROJECT2_BTNODE_H
