#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo snap remove intellij-idea-community");

    return commands;
}