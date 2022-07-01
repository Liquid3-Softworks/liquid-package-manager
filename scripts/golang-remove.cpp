#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo apt remove golang-go");

    return commands;
}