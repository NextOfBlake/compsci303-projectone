#ifndef PROJECT2_MORSE_H
#define PROJECT2_MORSE_H

#include <string>
#include "BinaryTree.h"


class Morse {
public:
    static BinaryTree<char>* code;

    static void useCode(std::string);
    static std::string encode();
    static std::string decode();
    static int exit();
};


#endif //PROJECT2_MORSE_H
