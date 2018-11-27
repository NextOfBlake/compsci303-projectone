#include "Morse.h"
#include <fstream>
#include <queue>
#include <vector>
#include <iostream>
#include <iomanip>
#include "print.h"
using namespace std;

//DECLARE A NEW BINARY TREE THAT HOLDS THE MORSE CODE
BinaryTree<char>* Morse::code = new BinaryTree<char>();

//GIVEN A FILENAME BUILD THE MORSE CODE TREE
void Morse::useCode(string file)
{
    string line;
    ifstream morseCode(file); //open file

    Morse::code->balancedTree(Morse::code->root, 4); //create morse sized tree

    while(getline(morseCode, line)) { //loop through each line
        char letter = line.front(); //first pos is symbol
        line.erase(0,1);

        queue<char> path = Morse::directions(line); //unique binary path

        Morse::code->insert(Morse::code->root, path, letter); //insert the letter using that path
    }
}

//TRANSFORM UNDERSCORES => R AND PERIODS => L
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

//DECODE MORSE WORD TO ENGLISH WORD
string Morse::decode(string encoded)
{
    vector<string> morseLetters;
    string decoded;
    istringstream iss(encoded);

    for(string encoded; iss >> encoded; ) //split encoded using spaces
        morseLetters.push_back(encoded);

    for(auto letter : morseLetters)
    {
        char realLetter = Morse::code->locate(Morse::code->root, Morse::directions(letter))->data; //find english letter from morse letter
        decoded.push_back(realLetter);
    }

    return decoded;
}

//DECODE MANY MORSE WORDS
string Morse::decodeWords(vector<string> words)
{
    string decoded;
    for(auto word : words)
        decoded += Morse::decode(word) + " ";

    return decoded;
}

//ENCODE ENGLISH WORD TO MORSE WORD
string Morse::encode(string message)
{
    string encoded;
    for(auto letter : message)
    {
        string morseLetter;
        string path = Morse::code->directionsTo(Morse::code->root, letter); //find morse path of letter
        for(auto token : path) //transform path to morse code
        {
            if(token == 'R')
                morseLetter.push_back('_');
            if(token == 'L')
                morseLetter.push_back('.');
        }
        encoded += morseLetter + ' '; //add morse letter
    }
    return encoded;
}

//ENCODE MANY ENGLISH WORDS
string Morse::encodeWords(vector<string> words)
{
    string encoded;
    for(auto word : words)
        encoded += Morse::encode(word) + " ";

    return encoded;
}

//ASK A USER A QUESTION, NO WILL STOP THE PROGRAM
char Morse::ask(string question)
{
    console::print<' '>(question, "(y/n): ");
    char input = console::input<char>(); //get user input

    if(input == 'y') return input;
    if(input == 'n') Morse::exit(); //exit on no

    console::print("Invalid Input: Try again");
    Morse::ask(question);
}

//READ OUT MESSAGE TOKENS OVER PERIOD OF TIME
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

//QUITS THE PROGRAM
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

//A TIME DELAY
void Morse::wait()
{
    for(int i=0; i < 10000000; i++)
    {
        for(int j = i; j < 10000; j++)
        {
            int num = 5*7*17*19;
            num = num/2;
        }
    }
}