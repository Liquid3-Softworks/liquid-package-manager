#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo snap remove flutter");

    return commands;
}