#ifndef PROJECT2_MORSE_H
#define PROJECT2_MORSE_H

#include <string>
#include <queue>
#include "BinaryTree.h"


class Morse {
public:
    static BinaryTree<char>* code;

    //GIVEN A FILENAME BUILD THE MORSE CODE TREE
    static void useCode(std::string);

    //TRANSFORM UNDERSCORES => R AND PERIODS => L
    static std::queue<char> directions(std::string);

    //DECODE MORSE WORD TO ENGLISH WORD
    static std::string decode(std::string);

    //DECODE MANY MORSE WORDS
    static std::string decodeWords(std::vector<std::string>);

    //ENCODE ENGLISH WORD TO MORSE WORD
    static std::string encode(std::string);

    //ENCODE MANY ENGLISH WORDS
    static std::string encodeWords(std::vector<std::string> words);

    //ASK A USER A QUESTION, NO WILL STOP THE PROGRAM
    static char ask(std::string);

    //READ OUT MESSAGE TOKENS OVER PERIOD OF TIME
    static void send(std::string);

    //QUITS THE PROGRAM
    static void exit();

    //A TIME DELAY
    static void wait();
};


#endif //PROJECT2_MORSE_H
