#include <iostream>
#include <string>
#include <fstream>

#include "print.h"
#include "Morse.h"
using namespace std;

int main() {
    //Know the Secret Code
    Morse::useCode("../morse.txt");

    //Receive Message
    string received = ".... . ._.. ._.. ___";
    console::print("You've Got Mail!", received);
    console::print("Decode It? (y/n)");
    char seeIt = console::input<char>();

    if(seeIt == 'n')
        return Morse::exit();

    //Decode Message
    string decoded = Morse::decode(received);
    console::print("They Said", decoded);

    //Reply
    console::print("Reply Back? (y/n)");
    char reply = console::input<char>();

    if(reply == 'n')
        return Morse::exit();

    console::print("Message: ");
    string response = console::input<string>();

    //Encode Response
    string message = Morse::encode(response);

    //Send Message & Exit
    Morse::send(message);
    return Morse::exit();
}