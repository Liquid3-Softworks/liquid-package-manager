#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo apt update");
    commands += system("sudo apt-get install -y nasm");

    return commands;
}