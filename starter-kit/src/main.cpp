#include <iostream>
#include <string>

using namespace std;

int main() {

    string command;

    while (getline(cin, command)) {

        string firstWord = "";

        for (int i = 0; i < command.length(); i++) {

            if (command[i] == ' ') {
                break;
            }

            firstWord += command[i];
        }

        if (firstWord == "SUB") 
        {
            // TODO
        }
        else if (firstWord == "UNSUB") 
        {
            // TODO
        }
        else if (firstWord == "PUB") 
        {
            // TODO
        }
        else if (firstWord == "PRICE") 
        {
            // TODO
        }
        else if (firstWord == "TICK") 
        {
            // TODO
        }
        else if (firstWord == "INBOX") 
        {
            // TODO
            // find the inbox of the user in the file then call displayInbox();
        }
        else if (firstWord == "HISTORY") 
        {
            // TODO
        }
        else if (firstWord == "STATS") 
        {
            // TODO
        }
        else if (command[0] == '#') 
        {
            continue;
        }
        else 
        {
            // TODO: print error message
        }
    }
}