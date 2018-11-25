#include "Morse.h"
#include <fstream>
#include <queue>
#include <chrono>
#include "print.h"
using namespace std;

BinaryTree<char>* Morse::code = new BinaryTree<char>(4);

void Morse::useCode(string file)
{
    string line;
    ifstream morseCode(file);

    Morse::code->balancedTree(Morse::code->root, 4);

    while(getline(morseCode, line)) {
        char letter = line.front();
        line.erase(0,1);

        queue<char> path = Morse::directions(line);

        Morse::code->insert(Morse::code->root, path, letter);
    }
}

queue<char> Morse::directions(string morse)
{
    queue<char> path;

    for(auto token : morse)
    {
        if(token == '_')
            path.push('R');
        if(token == '.')
            path.push('L');
    }
    return path;
}

string Morse::decode()
{
    return "hello";
}

string Morse::encode()
{
    return "hello";
}

int Morse::exit()
{
    console::print<' '>("Signing Off...");
    return 0;
}