#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo apt install snapd");
    commands += system("sudo snap install code --classic");

    return commands;
}