#include "Morse.h"
#include <fstream>
#include "print.h"
using namespace std;

BinaryTree<char>* Morse::code = new BinaryTree<char>;

void Morse::useCode(string file)
{
    string line;
    ifstream morseCode(file);

    while(getline(morseCode, line)) {
        char given = line.front();
        line.erase(0,1);
        string morse = line;
    }
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
    return 0;
}