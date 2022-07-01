#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo apt remove lua5.3");

    return commands;
}