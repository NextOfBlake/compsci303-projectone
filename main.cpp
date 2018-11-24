#include <iostream>

#include "print.h"

int main() {
    //Know the Secret Code
    morse::secretCode('file.txt');

    //Receive Message
    string received = ".... . .-.. .-.. ---";
    console::print("You've Got a Mail!", received);
    console::print("Decode It? (y/n)");
    char seeIt = console::input();

    if(seeIt == 'n')
        return morse::exit();

    //Decode Message
    string decoded = morse::decode()
    console::print("They Said", decoded);

    //Reply
    console::print("Reply Back? (y/n)");
    char reply = console::input();

    if(reply == 'n')
        return morse::exit();

    console::print("Message: ");
    string response = console::input();

    //Encode Response
    string message = morse::encode(response);
    console::print("Received Message: ", message);

    //Send Message & Exit
    morse::send(message);
    return morse::exit();
}