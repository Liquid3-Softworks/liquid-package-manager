#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo npm uninstall --global ts-node");
    commands += system("sudo npm uninstall --global typescript");

    return commands;
}