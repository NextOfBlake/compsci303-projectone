#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "print.h"
#include "Morse.h"
using namespace std;

int main() {
    /**Defaults*/
    string morseCode = "../morse.txt";
    vector<string> received {
        "__ ._ _.__",
        "..",
        ".... ._ ..._ .",
        "._ _.",
        "._"
    };

    /**Know the Secret Code*/
    Morse::useCode(morseCode);

    /**Receive & Decode Message*/
    console::print("\nYou've Got Mail!");
    console::printWords(received);

    Morse::ask("\nDecode It?");

    console::print(Morse::decodeWords(received));

    /**Reply*/
    Morse::ask("Reply Back?");

    console::print<' '>("Message:");
    vector<string> message = console::inputWords();

    /**Encode Response*/
    string response = Morse::encodeWords(message);

    /**Send Message & Exit*/
    Morse::send(response);
    Morse::exit();
}