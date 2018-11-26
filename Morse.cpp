#include "Morse.h"
#include <fstream>
#include <queue>
#include <vector>
#include <iostream>
#include <iomanip>
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

string Morse::decode(string encoded)
{
    vector<string> morseLetters;
    string decoded;
    istringstream iss(encoded);

    for(string encoded; iss >> encoded; )
        morseLetters.push_back(encoded);

    for(auto letter : morseLetters)
    {
        char realLetter = Morse::code->locate(Morse::code->root, Morse::directions(letter))->data;
        decoded.push_back(realLetter);
    }

    return decoded;
}

string Morse::decodeWords(vector<string> words)
{
    string decoded;
    for(auto word : words)
        decoded += Morse::decode(word) + " ";

    return decoded;
}

string Morse::encode(string message)
{
    string encoded;
    for(auto letter : message)
    {
        string morseLetter;
        string path = Morse::code->directionsTo(Morse::code->root, letter);
        for(auto token : path)
        {
            if(token == 'R')
                morseLetter.push_back('_');
            if(token == 'L')
                morseLetter.push_back('.');
        }
        encoded += morseLetter + ' ';
    }
    return encoded;
}

string Morse::encodeWords(vector<string> words)
{
    string encoded;
    for(auto word : words)
        encoded += Morse::encode(word) + " ";

    return encoded;
}

char Morse::ask(string question)
{
    console::print<' '>(question, "(y/n): ");
    char input = console::input<char>();

    if(input == 'y') return input;
    if(input == 'n') Morse::exit();

    console::print("Invalid Input: Try again");
    Morse::ask(question);
}

void Morse::send(string message)
{
    cout << "\nSending: ";
    cout.flush();
    for(auto token : message)
    {
        cout << token;
        cout.flush();
        Morse::wait();
    }
    console::print("\nSent!");
}

void Morse::exit()
{
    cout << endl << endl;
    console::print<' '>("Signing Off");
    for(int i=0; i < 5; i++)
    {
        cout << '.';
        cout.flush();
        Morse::wait();
    }
    std::exit(0);
}

void Morse::wait()
{
    for(int i=0; i < 10000000; i++)
    {
        for(int j = i; j < 20000; j++)
        {
            int num = 5*7*17*19;
            num = num/2;
        }
    }
}