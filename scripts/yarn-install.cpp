#include <stdlib.h>

int main() {
    int commands;

    commands = system("lpm-install-nodejs");
    commands += system("sudo npm install --global yarn");

    return commands;
}