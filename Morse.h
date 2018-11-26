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
    static std::string encodeWords(std::vector<std::string> words);
    static std::string decode(std::string);
    static std::string decodeWords(std::vector<std::string>);
    static void send(std::string);
    static char ask(std::string);
    static void exit();
    static void wait();

    static std::queue<char> directions(std::string);
};


#endif //PROJECT2_MORSE_H
