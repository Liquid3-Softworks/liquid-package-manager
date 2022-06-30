#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo apt install curl");
    commands += system("curl -sL https://deb.nodesource.com/setup_18.x | sudo bash -");
    commands += system("sudo apt install -y nodejs");

    return commands;
}