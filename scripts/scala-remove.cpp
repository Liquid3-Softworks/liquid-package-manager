#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo apt-get remove scala");

    return commands;
}