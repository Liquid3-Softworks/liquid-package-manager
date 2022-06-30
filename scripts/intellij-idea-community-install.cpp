#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo apt install snapd");
    commands = system("sudo snap install intellij-idea-community --classic");

    return commands;
}