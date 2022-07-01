#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo apt update");
    commands += system("sudo apt install -y ruby-full");

    return commands;
}