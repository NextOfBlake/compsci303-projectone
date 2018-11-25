#ifndef PROJECT2_MORSE_H
#define PROJECT2_MORSE_H

#include <string>
#include <queue>
#include "BinaryTree.h"


class Morse {
public:
    static BinaryTree<char>* code;

    static void useCode(std::string);
    static std::string encode(std::string);
    static std::string decode(std::string);
    static void send(std::string);
    static int exit();
    static void wait();

    static std::queue<char> directions(std::string);
};


#endif //PROJECT2_MORSE_H
