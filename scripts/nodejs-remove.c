#include <stdlib.h>

int main() {
    int commands;

    commands += system("sudo apt remove -y nodejs");

    return commands;
}