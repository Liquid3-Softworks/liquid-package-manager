#include <stdlib.h>

int main() {
    int commands;

    commands = system("sudo snap remove android-studio");

    return commands;
}