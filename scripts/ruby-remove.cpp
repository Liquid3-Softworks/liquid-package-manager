#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo apt remove ruby-full");

    return commands;
}