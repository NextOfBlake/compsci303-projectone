#include <iostream>
#include <string>
#include <fstream>

#include "print.h"
#include "Morse.h"
using namespace std;

int main() {
    //Know the Secret Code
    Morse::useCode("../morse.txt");

//    //Receive Message
//    string received = ".... . .-.. .-.. ---";
//    console::print("You've Got a Mail!", received);
//    console::print("Decode It? (y/n)");
//    char seeIt = console::input<char>();
//
//    if(seeIt == 'n')
//        return morse::exit();
//
//    //Decode Message
//    string decoded = morse::decode()
//    console::print("They Said", decoded);
//
//    //Reply
//    console::print("Reply Back? (y/n)");
//    char reply = console::input<char>();
//
//    if(reply == 'n')
//        return morse::exit();
//
//    console::print("Message: ");
//    string response = console::input<string>();
//
//    //Encode Response
//    string message = morse::encode(response);
//    console::print("Received Message: ", message);
//
//    //Send Message & Exit
//    morse::send(message);
//    return morse::exit();

return 0;
}