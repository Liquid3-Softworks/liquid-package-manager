#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo rustup self uninstall");

    return commands;
}